
int compare(const void* e1,const void* e2)
{
	return *((int*)e2)-*((int*)e1);
}

int main()
{
	int n,i,ql,qr,tl,tr,total=0;
	int t[1000],q[1000];
	while(cin>>n && n)
{
total=0;
	for (i=0;i<n;i++)	cin>>t[i];
	for (i=0;i<n;i++)	cin>>q[i];
	qsort(t,n,sizeof(int),compare);
	qsort(q,n,sizeof(int),compare);	
	ql=0;
	qr=n-1;
	tl=0;
	tr=n-1;
	while(ql<=qr)
	{
		if (q[ql]>t[tl]){
			tr--;
			ql++;
			total-=200;
			continue;
		}
		if (q[ql]<t[tl]){
			ql++;
			tl++;
			total+=200;
			continue;
		}
		if (q[qr]>t[tr])
		{
			ql++;
			tr--;
			total-=200;
			continue;
		}
		if (q[qr]<t[tr])
		{
			qr--;
			tr--;
			total+=200;
			continue;
		}
		int flag=0;
		for (i=ql;i+1<=qr;i++)
		{
			if (q[i]!=q[i+1]){
				flag=1;
				break;
			}
		}
		if (flag==0)	break;
		ql++;
		tr--;
		total-=200;
	}
	cout<<total<<endl;
}
	return 0;
}
