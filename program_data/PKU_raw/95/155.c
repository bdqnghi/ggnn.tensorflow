int main()
{
	char one[80],two[80];
	gets(one);
	gets(two);
	int i,a=0;
	for(i=0;one[i]!='\0';i++)
	{	if(one[i]>='A'&&one[i]<='Z') one[i]+=32;
	}	
	for(i=0;two[i]!='\0';i++)	
	{   if(two[i]>='A'&&two[i]<='Z') two[i]+=32;
     }
	if(strcmp(one,two)>0) printf(">");
	if(strcmp(one,two)==0) printf("=");
	if(strcmp(one,two)<0) printf("<");
    gets(one);
	return 0;
}

