

int cmp(const void *e1,const void *e2)
{
	return *(int *)e2-*(int *)e1;
}

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
	int tianji[1001],qiwang[1001];
	int i,j;
	for(i=0;i<n;i++)
		cin>>tianji[i];
	for(i=0;i<n;i++)
		cin>>qiwang[i];
	qsort(tianji,n,sizeof(int),cmp);
	qsort(qiwang,n,sizeof(int),cmp);
	i=0;
	j=i;
	int k=n-1,h=n-1;
	int money=0;

	for(int m=0;m<n;m++)
	{
		if(tianji[i]>qiwang[j])
		{
			i++,j++;
			money+=200;
		}
		else
		{
			if(tianji[k]>qiwang[h])
			{
				k--,h--;
				money+=200;
			}
			else
			{
				if(tianji[k]>qiwang[j])
					money+=200;
				else if(tianji[k]<qiwang[j])
					money-=200;
				k--;
				j++;
			}
		}
	}
	cout<<money<<endl;
	}
}