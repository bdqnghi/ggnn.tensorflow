int T[1000], Q[1000];
int TT[1000];
int Cmp(const void * e1, const void * e2)
{
	int * p1 = (int *)e1, * p2 = (int * ) e2;
	return *p1 - *p2;
}

int main()
{
	int n;
	while(cin>>n && n)
	{
		for(int i = 0;i < n;i ++)
			cin>>T[i];
		for(int i = 0;i < n;i ++)
			cin>>Q[i];
		qsort(T,n,sizeof(int),Cmp);
		qsort(Q,n,sizeof(int),Cmp);
	int pT,qT,pQ,qQ;
	pT = 0,qT = n - 1,pQ = 0,qQ = n - 1;
	int ans = 0;
	for(int i = 0;i < n;i ++)
	{
		if(T[pT] > Q[pQ])
		{
			ans += 200;
			pT ++;
			pQ ++;
			continue;
		}
		if(T[pT] < Q[pQ])
		{
			ans -= 200;
			pT ++;
			qQ --;
			continue;
		}
		if(T[qT] > Q[qQ])
		{
			ans += 200;
			qT --;
			qQ --;
			continue;
		}
		if(T[qT] < Q[qQ])
		{
			ans -= 200;
			pT ++;
			qQ --;
			continue;
		}
		if(T[pT] > Q[qQ])
			ans += 200;
		else if(T[pT] < Q[qQ])
			ans -= 200;
		pT ++;
		qQ --;
	}



		cout<<ans<<endl;
	}
	return 0;
}