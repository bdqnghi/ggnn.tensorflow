int compare(const void*a,const void*b)
{
	return (*(int*)b)-(*(int*)a);
}
int main()
{
	int n=0,i=0,tianji[1000]={0},qiwang[1000]={0};
	while(cin>>n)
	{
		if(n==0)
			break;
		for(i=0;i<n;i++)
			cin>>tianji[i];
		for(i=0;i<n;i++)
			cin>>qiwang[i];
		qsort(tianji,n,sizeof(int),compare);
		qsort(qiwang,n,sizeof(int),compare);
		int head1=0,tail1=n-1,head2=0,tail2=n-1,money=0;
		while(head1<=tail1)
		{
			if(tianji[tail1]>qiwang[tail2])
			{
				money+=200;
				tail1--;
				tail2--;
			}
			else if(tianji[tail1]<qiwang[tail2])
			{
				money-=200;
				tail1--;
				head2++;
			}
			else
			{
				if(tianji[head1]>qiwang[head2])
				{
					money+=200;
					head1++;
					head2++;
				}
				else if(tianji[head1]<qiwang[head2])
				{
					money-=200;
					tail1--;
					head2++;
				}
				else
				{
					if(tianji[tail1]<qiwang[head2])
						money-=200;
					tail1--;
					head2++;
				}
			}
		}
		cout<<money<<endl;
	}
	return 0;
}
