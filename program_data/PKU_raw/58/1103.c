int main()
{
	char a[80];
	int n,i,k=0;
	scanf("%d\n",&n);
	while (n>0)
	{
		k=0;
		gets(a);
		if ((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_'))
		{
			for (i=1;i<=79;i++)
			{
				if(a[i]==0) break; 
				if (!((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||(a[i]=='_')))
				 {printf("0\n");k+=1;break;}
			}
			if (k==0) printf("1\n");
		}
		else printf("0\n");
		n--;
		memset(a, 0, 20);

	}
	return 0;
}