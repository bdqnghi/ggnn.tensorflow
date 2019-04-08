int main()
{
    int t[1000]={0},q[1000]={0},n,j,i,e,f;
	int t1,t2,q1,q2,k,money;
	while (1)
	{	
	scanf("%d",&n);
	if (n==0)
		break;
    for (i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	for (i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
	}
	for (i=1;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if (t[j]>t[j+1])
			{
				e=t[j];
				t[j]=t[j+1];
				t[j+1]=e;
			}
			if (q[j]>q[j+1])
			{
				f=q[j];
				q[j]=q[j+1];
				q[j+1]=f;
			}
		}
	}
	t1=0;t2=n-1;q1=0;q2=n-1;money=0,k=1;
	while (k!=0)
	{
		if (t1==t2)
			k=0;
		if (t[t2]>q[q2])
		{
			t2--;
			q2--;
			money+=200;
		}
		else if (t[t1]>q[q1])
		{
			t1++;
			q1++;
			money+=200;
		}
		else
		{
			if (t[t1]<q[q2])
				money-=200;
			t1++;
			q2--;
		}
	}
	printf("%d\n",money);
	}
	return 0;
}