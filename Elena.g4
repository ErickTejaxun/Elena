grammar Elena;

main: expr EOF;

expr: expr ('*'|'/') expr
    | expr ('+'|'-') expr
    | INT
    | ID 
    | DECIMAL
    | STRING
    | '(' expr ')'
    | 'true'
    | 'false'
    ;

INT : [0-9]+ ;
ID  : [a-zA-Z]+;
DECIMAL :   INT '.' INT;
STRING  : '"' .*? '"' ;
CARACTER: ''' ''';
