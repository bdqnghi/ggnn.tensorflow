void main()
{
	char str[100],c;
	int i,n,a,b,j,k,line;
    gets(str);
	n=strlen(str);
		b=n-1;
	for(i=n-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			a=i;
    	for(j=a+1;j<=b;j++)
		{
			printf("%c",str[j]);
			if(j==b) printf(" ");
		}
		      b=a-1;
		}
         if(i==0)
		{
			for(k=0;k<=b;k++)
			printf("%c",str[k]);
		}
	}
}