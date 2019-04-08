
void sort(int p[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(p[j]<p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
}
void main()
{
	/*l????????r???????*/
	int n,i,tl,tr,ql,qr,money;
	int tj[2000],qw[2000];
	while(scanf("%d",&n),n)
	{
		for(i=0;i<n;i++)
			scanf("%d",&tj[i]);
		for(i=0;i<n;i++)
			scanf("%d",&qw[i]);
		/*??????*/
		sort(tj,n);
		sort(qw,n);
		/*??*/				
		money=0;
		tl=ql=0;
		tr=qr=n-1;
		while(tl<=tr&&ql<=qr)
		{
			if(tj[tl]>qw[ql])
			{
				money=money+200;
				tl++;
				ql++;
			}
			else if(tj[tr]>qw[qr])
			{
				money=money+200;
				tr--;
				qr--;
			}
			else
			{
				if(tj[tr]<qw[ql])
					money=money-200;
				tr--;
				ql++;
			}
		}
		printf("%d\n",money);
	}
}