grammar amber;

//pattern
//	: type
//	| LID
//	| '!' LID
//	| '_'
//	| CTOR
//	| pretype LID
//	;

///////////////////////////////////////////////////////////////////////////////

/*
type
	:	TID ('[' type+ ']')?
	| TVID
	| '<' (pretype+|'*'|'_') '>'
	| '[' ('-'? INT | '*') '..' ('-'? INT | '*') ']'
	| '[' pretype ('*'|'+') ']'
	| '[' pretype+ ']'	
	| '[' pretype '->' pretype '+'? ']'
	| '{' subtype* '}'
	;

pretype
	:	type
	| LID ('(' subtype+ ')')?
	| '(' subtype+ ')'
	;

subtype
	:	pretype ('?'|'*'|'+')?
	| LABEL pretype '?'?
	;
*/	
///////////////////////////////////////////////////////////////////////////////

srule
	:	 expr EOF
	;
	
expr
	:	INT
	| CTOR
	
	| '{' (subexpr (',' subexpr)*)? '}'
	
	| LID ('{' subexpr (',' subexpr)* '}' | '(' subexpr (',' subexpr)* ')')?
	
	| '(' labexpr (',' labexpr)* ')'
	
	| BTIN '(' subexpr (',' subexpr)* ')'
	
	| '['
	     	(
	       																					|
					'->'																		|	       																				
	       	condexpr (',' condexpr)* ('|' expr)?		|
	       	expr '->' expr
	     	)
	  ']'
	
	//| '[' ('->' | (expr '->' expr)+) ']'

	| '-' expr
	| 'not' expr
	;


subexpr
	: expr ('if' expr)?
	| LABEL expr
	;

condexpr:	expr ('if' expr)?;

labexpr:	LABEL expr;
	



///////////////////////////////////////////////////////////////////////////////

TVID	: ('A'..'Z') ('A'..'Z'|'0'..'9')* ('_'('A'..'Z'|'0'..'9')+)*
			;

TID		: ('A'..'Z') ('A'..'Z'|'0'..'9')* ('a'..'z') ('a'..'z'|'A'..'Z'|'0'..'9')*
			;

LID		: ('a'..'z') ('a'..'z'|'0'..'9')* ('_'('a'..'z'|'0'..'9')+)*
			; 

CTOR	: ':' ('a'..'z') ('a'..'z'|'0'..'9')* ('_'('a'..'z'|'0'..'9')+)*
			;

LABEL :	('a'..'z') ('a'..'z'|'0'..'9')* ('_'('a'..'z'|'0'..'9')+)* ':'
			;
		
BTIN	: '_' ('a'..'z') ('a'..'z'|'0'..'9')* ('_'('a'..'z'|'0'..'9')+)* '_'
			; 

///////////////////////////////////////////////////////////////////////////////

INT :	'0'..'9'+
    ;

FLOAT
    :   ('0'..'9')+ '.' ('0'..'9')* EXPONENT?
    |   '.' ('0'..'9')+ EXPONENT?
    |   ('0'..'9')+ EXPONENT
    ;

COMMENT
    :   '//' ~('\n'|'\r')* '\r'? '\n' {$channel=HIDDEN;}
    |   '/*' ( options {greedy=false;} : . )* '*/' {$channel=HIDDEN;}
    ;

WS  :   ( ' '
        | '\t'
        | '\r'
        | '\n'
        ) {$channel=HIDDEN;}
    ;

STRING
    :  '"' ( ESC_SEQ | ~('\\'|'"') )* '"'
    ;

CHAR:  '\'' ( ESC_SEQ | ~('\''|'\\') ) '\''
    ;

fragment
EXPONENT : ('e'|'E') ('+'|'-')? ('0'..'9')+ ;

fragment
HEX_DIGIT : ('0'..'9'|'a'..'f'|'A'..'F') ;

fragment
ESC_SEQ
    :   '\\' ('b'|'t'|'n'|'f'|'r'|'\"'|'\''|'\\')
    |   UNICODE_ESC
    |   OCTAL_ESC
    ;

fragment
OCTAL_ESC
    :   '\\' ('0'..'3') ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7')
    ;

fragment
UNICODE_ESC
    :   '\\' 'u' HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT
    ;
