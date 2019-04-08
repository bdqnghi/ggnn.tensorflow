
int money[100];
int main()
{
	int n,a[100],b[100],c[100],i,j,k,z=0;
	char name[100][30],ganbu[100],xibu[100],t[30];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",name[i], &a[i],&b[i],&ganbu[i],&xibu[i],&c[i]);
		if(a[i]>80&&c[i]!=0)
			money[i]=money[i]+8000;
		if(a[i]>85&&b[i]>80)
			money[i]=money[i]+4000;
		if(a[i]>90)
			money[i]=money[i]+2000;
		if(a[i]>85&&xibu[i]=='Y')
			money[i]=money[i]+1000;
		if(b[i]>80&&ganbu[i]=='Y')
			money[i]=money[i]+850;
	}
	for(j=0;j<n;j++)
		z=z+money[j];
	for(j=n-1;j>0;j--)
	{
		if(money[j]>money[j-1])
		{
			k=money[j];
			money[j]=money[j-1];
			money[j-1]=k;

			strcpy(t,name[j]);
			strcpy(name[j],name[j-1]);
			strcpy(name[j-1],t);
		}
	}
	printf("%s\n%d\n%d\n",name[0],money[0],z);

	return 0;
}