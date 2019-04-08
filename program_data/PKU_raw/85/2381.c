int main()
{
	int n,i,j,a;
	char zfc[1000][30];
	char m[100];
	gets(m);
	n=atoi(m);
	for(i=0;i<n;i++)
	{
		   gets(zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		a=1;
		if((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||(zfc[i][0]=='_'))
		{
			1;
		}else{
		    a=0;
		}
        for(j=1;zfc[i][j]!='\0';j++)
		{
			if((zfc[i][j]>='a'&&zfc[i][j]<='z')||(zfc[i][j]>='A'&&zfc[i][j]<='Z')||(zfc[i][j]=='_')||(zfc[i][j]>='0'&&zfc[i][j]<='9'))
			{
				1;
			}else{
			     a=0;
			}
		}
        if(a==0)
		{
			printf("no\n");
		}else if(a==1)
		{
			printf("yes\n");
		}
	}
	return 0;
}