int main()
{
	char a[10],b[10],k;
	int i,l,t=0,m;
	while((scanf("%s%s",a,b))!=EOF)
	{
		l=strlen(a);
        m=strlen(b);
		k=a[0];
		for(i=1;i<l;i++)
			if(a[i]>k)
			{
				k=a[i];
				t=i;
			}
		for(i=0;i<=t;i++)
			printf("%c",a[i]);
		for(i=0;i<m;i++)
            printf("%c",b[i]);
		for(i=t+1;i<l;i++)
		printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}