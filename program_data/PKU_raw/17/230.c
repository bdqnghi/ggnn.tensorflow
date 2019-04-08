int main()
{
    char a[A];
	int i,j,n;
    while(scanf("%s",a)!=EOF)
	{
        printf("%s\n",a);
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')
					{
                          a[j]=0;
						  a[i]=0;
						  break;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]=='(') {printf("$");continue;}
			if(a[i]==')') {printf("?");continue;}
			printf(" ");
			
		}
		printf("\n");
	}
	return 0;
}