int main()
{
	static int a[16],b[16];
	int n,i,j,s=0;
	while(scanf("%d",&a[0]),a[0]!=-1)
	{
		for(i=1;a[i-1]!=0;i++)
		{b[i-1]=2*a[i-1];
		scanf("%d",&a[i]);}
		n=i-2;
		s=0;
		for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
		if(a[i]==b[j])
		{
			s++;break;
			}
		printf("%d\n",s);
		}	
}