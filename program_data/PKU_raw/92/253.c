int a[1002],b[1002],n,sum,cas;
int cmp1( const void *a ,const void *b) 
{ 
 int i;
	 i=(*(int *)a)-(*(int *)b);
 return i;
}
int cmp2( const void *a ,const void *b) 
{ 
 int i;
	 i=(*(int *)b)-(*(int *)a);
 return i;
}
void solve()
{
	int i,j,k;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if ((b[j]<a[i])&&(b[j]!=-1)&&(a[i]!=-1))
			{
				sum++;
				b[j]=-1;
				a[i]=-1;
				break;
			}
			/*if ((b[j]==a[i])&&(b[j]!=-1)&&(a[i]!=-1))
			{
				cas--;
				b[j]=-1;
				a[i]=-1;
				break;
			}*/
		}
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if ((b[j]==a[i])&&(b[j]!=-1)&&(a[i]!=-1))
			{
				cas++;
				b[j]=-1;
				a[i]=-1;
				break;
			}
		}
	}
//	cout<<"cas="<<cas<<endl;
//	cout<<"sum="<<sum<<endl;

	cout<<200*(sum-(n-cas-sum))<<endl;
}

int main()
{
	int i;
	while (scanf("%d",&n))
	{
		if (n==0)
			break;
		sum=0;
		cas=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for (i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for (i=1;i<=n;i++)
			scanf("%d",&b[i]);
		qsort(&a[1],n,sizeof(a[1]),cmp1);
		qsort(&b[1],n,sizeof(b[1]),cmp2);
		/*for (i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		for (i=1;i<=n;i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		solve();
	}
}