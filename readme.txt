projet compilation

STRUCTURE: mc_struct acco DEC accf idf pvg {doubleDec ($5);inserer ($5,"STRUCT");}
/*|mc_struct idf idf  STRUCTURE {doubleDec ($3);inserer ($3,"STRUCT");}*/
/*|vig idf STRUCTURE {doubleDec ($2);inserer ($2,"STRUCT");}*/
/*|pvg*/
;

LISTVAR: mc_integer LISTIDF  
|mc_float LISTIDF  
;
		
LISTIDF: idf vig LISTIDF {doubleDec ($1);inserer ($1,"constant");}
|idf pvg {doubleDec ($1);inserer ($1,"constant");}
;
