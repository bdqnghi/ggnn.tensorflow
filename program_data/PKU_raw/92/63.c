
int n;
int King[1005];
int Tian[1005];
int Ans[1005];

int mCmp(const void *v1, const void *v2)
{
	int *i1=(int *)v1;
	int *i2=(int *)v2;
	return *i1-*i2;
}

int main()
{
	int i,j,k;
	int max;
	while(1)
	{
		cin>>n;
		if (n==0) return 0;
		memset(King,0,sizeof(King));
		memset(Tian,0,sizeof(Tian));
		memset(Ans,0,sizeof(Ans));
		max=-1000000;
		for(i=0;i<n;i++)
			cin>>Tian[i];
		for(i=0;i<n;i++)
			cin>>King[i];
		qsort(Tian,n,sizeof(int),mCmp);
		qsort(King,n,sizeof(int),mCmp);
		for(i=0;i<=n;i++)
		{
			Ans[i]=0;
			for(j=0;j<i;j++)
			{
				if(King[n-1-j]>Tian[j])
					Ans[i]-=200;
				else if (King[n-1-j]<Tian[j])
					Ans[i]+=200;
			}
			for(j=i;j<n;j++)
			{
				if(King[j-i]>Tian[j])
					Ans[i]-=200;
				else if (King[j-i]<Tian[j])
					Ans[i]+=200;
			}
			if(Ans[i]>=max) max=Ans[i];
		}
		cout<<max<<endl;
	}
}