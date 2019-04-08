int main()
{
	int n,i,s,k;
	char  a[15],b[5];
    while( scanf("%s%s",a,b)!=EOF)
	{
        s=0;
        k=0;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]>k) 
			{
				k=a[i];
				s=i;
			}
		}
		
		for(i=0;i<=s;i++)
		{
			printf("%c",a[i]);
		}
		printf("%s",b);
		for(i=s+1;i<n;i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
		return 0;
}