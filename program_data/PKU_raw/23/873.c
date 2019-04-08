void main()
{
	int n,i,j,k=0;
	char a[101],*p;
	gets(a);
	n=strlen(a);
	for(p=a+n-1,i=0;i<n;i++,p--)
	    if(*p==' ') 
		{
			for(j=1;j<=k;j++)
				printf("%c",*(p+j));
		    k=0;
			printf(" ");
		}
		else
		{
			k++;
			if(p==a)
				for(j=0;j<k;j++)
				printf("%c",*(p+j));
		}
}