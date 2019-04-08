void main()
{
	int i,j,k=0;
	char c[100];
	gets(c);
	for(i=strlen(c)-1;i>=0;i--)
	{    
		if(c[i]!=' ')
	 k++; 
		if(c[i]==' ')
		{	for(j=i+1;j<=i+k;j++)
				printf("%c",c[j]);printf(" ");k=0;}
		if(i==0)
			for(j=i;j<k;j++)
				printf("%c",c[j]);
	}
}
 