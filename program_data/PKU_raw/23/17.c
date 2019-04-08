void main()
{
	char str[100],string[100][100],c;
	int i,j,k,t;
	gets(str);
	j=0;k=0;
	for(i=0;;i++)
	{
		c=str[i];
		if(c!=' '&&c!='\0') {string[j][k]=c;k=k+1;}
		else if(c==' ')
		{string[j][k]='\0';j=j+1;k=0;}
		else {string[j][k]='\0';break;}
	}
	t=j;
	for(j=t;j>0;j--)
       printf("%s ",string[j]);
	printf("%s\n",string[0]);
}
    