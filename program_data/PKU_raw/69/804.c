int main()
{
	char A[250],B[250],C[250],D[250],E[250];
	int i,j,a,b,c;
	gets(A);
	gets(B);
	a=strlen(A);
	b=strlen(B);
	for (i=a-1,j=0;i>=0;i--,j++)
	{
		C[j]=A[i];
	}
	C[j]=0;
	for (i=b-1,j=0;i>=0;i--,j++)
	{
		D[j]=B[i];
	}
	D[j]=0;
	if (a>b)
	{
		for (i=0;i<b;i++)
		{
			if (E[i]==1)
			E[i]=C[i]+D[i]-47;
			else 
			E[i]=C[i]+D[i]-48;
			if (E[i]>57)
			{
				E[i]-=10;
				E[i+1]=1;
			}
		}		
		for (i=b;i<a;i++)
		{	if (E[i]==1)
			E[i]=C[i]+1;
			else 
			E[i]=C[i];
			if (E[i]>57)
			{	E[i]-=10;
			E[i+1]=1;
			}
		}
		if (E[i]==1)
		{	E[i]=49;
		E[i+1]=0;
		}
		else E[i]=0;
		c=0;
		for (i=strlen(E)-1;i>=0;i--)
		{	
			if (E[i]!=48 )
			{
			printf("%c",E[i]);
			c=1;
			}
			if (E[i]==48 && c==1)
			printf("%c",E[i]);
		}
		if (c==0)
			printf("0");
		printf("\n");
	}
	else  
	{
		for (i=0;i<a;i++)
		{
			if (E[i]==1)
			E[i]=C[i]+D[i]-47;
			else 
			E[i]=C[i]+D[i]-48;
			if (E[i]>57)
			{
				E[i]-=10;
				E[i+1]=1;
			}
		}
		for (i=a;i<b;i++)
		{	if (E[i]==1)
			E[i]=D[i]+1;
			else 
			E[i]=D[i];
			if (E[i]>57)
			{	E[i]-=10;
			E[i+1]=1;
			}
		}
		if (E[i]==1)
		{ E[i]=49;
		E[i+1]=0;
		}
		else E[i]=0;
		c=0;
		for (i=strlen(E)-1;i>=0;i--)
		{
			if (E[i]!=48 )
			{
			printf("%c",E[i]);
			c=1;
			}
			if (E[i]==48 && c==1)
			printf("%c",E[i]);
			
		}
		if (c==0)
			printf("0");
		printf("\n");
	}


	return 0;
}


