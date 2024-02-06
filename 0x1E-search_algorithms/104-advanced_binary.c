#include"search_algos.h"

/**
**advanced_binary_recursive-Searchesrecursivelyforavalueinasorted
**arrayofintegersusingbinarysearch.
**@array:Apointertothefirstelementofthe[sub]arraytosearch.
**@left:Thestartingindexofthe[sub]arraytosearch.
**@right:Theendingindexofthe[sub]arraytosearch.
**@value:Thevaluetosearchfor.
**
**Return:Ifthevalueisnotpresent,-1.
**else,theindexwherethevalueislocated.
**
**Description:Printsthe[sub]arraybeingsearchedaftereachchange.
**/
intadvanced_binary_recursive(int*array,size_tleft,size_tright,intvalue)
{
		size_ti;

			if(right<left)
						return(-1);

				printf("Searchinginarray:");
					for(i=left;i<right;i++)
								printf("%d,",array[i]);
						printf("%d\n",array[i]);

							i=left+(right-left)/2;
								if(array[i]==value&&(i==left||array[i-1]!=value))
											return(i);
									if(array[i]>=value)
												return(advanced_binary_recursive(array,left,i,value));
										return(advanced_binary_recursive(array,i+1,right,value));
}

/**
**advanced_binary-Searchesforavalueinasortedarray
**ofintegersusingadvancedbinarysearch.
**@array:Apointertothefirstelementofthearraytosearch.
**@size:Thenumberofelementsinthearray.
**@value:Thevaluetosearchfor.
**
**Return:IfthevalueisnotpresentorthearrayisNULL,-1.
**Otherwise,thefirstindexwherethevalueislocated.
**
**Description:Printsthe[sub]arraybeingsearchedaftereachchange.
**/
intadvanced_binary(int*array,size_tsize,intvalue)
{
		if(array==NULL||size==0)
					return(-1);

			return(advanced_binary_recursive(array,0,size-1,value));
}
