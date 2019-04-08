
int comp(const void* p1,const void* p2)
{
	int* p11=(int*)p1;
	int* p22=(int*)p2;
	return *p11-*p22;
}

int main()
{
	int n;
	int hq[1010],ht[1010];
	while(cin>>n && n!=0)
	{
		for(int i=0;i!=n;++i)
			cin>>ht[i];
		for(int i=0;i!=n;++i)
			cin>>hq[i];
		qsort(ht,n,sizeof(int),comp);
		qsort(hq,n,sizeof(int),comp);
		int it=0,iq=0,jt=n-1,jq=n-1;
		int result=0;
		for(int i=0;i!=n;++i)
		{
			if(ht[jt]>hq[jq])
			{
				--jt,--jq;
				result+=200;
			}
			else if(ht[it]>hq[iq])
			{
				++it,++iq;
				result+=200;
			}
			else
			{
				if(ht[it]<hq[jq])
					result-=200;
				++it,--jq;
			}
		}
	cout<<result<<endl;

	}
	return 0;		
}