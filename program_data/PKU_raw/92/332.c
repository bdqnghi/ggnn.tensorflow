int cmp(const void*p1,const void*p2)
{
	int *e1,*e2;
	e1=(int*)p1;
	e2=(int*)p2;
	return *e1 > *e2?1:-1;
}
int main()
{
	int n;
	int T[1001],E[1001];
	while(1)
	{
		cin >> n;
		if(n==0)break;
		for(int i=0;i<n;i++)
		cin >> T[i];
		for(int i=0;i<n;i++)
		cin >> E[i];
		qsort(T,n,sizeof(int),cmp);
		qsort(E,n,sizeof(int),cmp);
		int ans=0;
		int lT=0,lE=0,rT=n-1,rE=n-1;
		while(lT<=rT)
		{
			if(T[lT]>E[lE]){ans+=200;lT++;lE++;}
			else if(T[lT]<E[lE])
			{
				ans-=200;
				lT++;rE--;
			}
			else
			{
				if(T[rT]<E[rE]){ans-=200;lT++;rE--;}
				else if(T[rT]>E[rE]){ans+=200;rE--;rT--;}
				else
				{
					if(T[lT]<E[rE]){ans-=200;lT++;rE--;}
					else {lT++;rE--;}
				}
			}
		}
		cout <<ans<<endl;
	}

	return 0;
}
