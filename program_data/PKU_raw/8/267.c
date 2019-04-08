int m,n,s1[1000],s2[1000],s[1000];
void f1(void)
{
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&s1[i]);
	for(i=0;i<n;i++)
		scanf("%d",&s2[i]);
}
void f2(void)
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(s1[j]>s1[j+1]){temp=s1[j];s1[j]=s1[j+1];s1[j+1]=temp;}
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s2[j]>s2[j+1]){temp=s2[j];s2[j]=s2[j+1];s2[j+1]=temp;}
		}
	}
}
void f3(void)
{
	int i;
	for(i=0;i<m;i++)
		s[i]=s1[i];
	for(i=m;i<m+n;i++)
		s[i]=s2[i-m];
}
void f4(void)
{
	int i;
	printf("%d",s[0]);
	for(i=1;i<m+n;i++)printf(" %d",s[i]);
}
void main()
{
	f1();
	f2();
	f3();
	f4();
}
