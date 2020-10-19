#include "parking_operation.h"

int login(char user[10],char pass[10])
{
	int k;
    char uname[10]="user";
    char pword[10]="pass";




    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                       ENTER USERNAME:-");
	scanf("4%s", uname);
	printf(" \n\n                       ENTER PASSWORD:-");
	scanf("4%s", pword);
	/*while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;*/
	//scanf("%s",&pword);
		if((uname=="user") && (pword=="pass"))
	{
	k=1;
	}
	else{
        k=0;
	}
return k;
}
