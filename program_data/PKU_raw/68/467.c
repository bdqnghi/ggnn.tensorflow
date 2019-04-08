int a(int m)
{
	int i;float k;
	k=sqrt((float)m);
	for(i=2;i<=k;i++)
		if(m%i==0)
			break;
	if(i>k)return 1;
	else return 0;
}
void main()
{
	int w;int q;int n;
	scanf("%d",&w);
	for(q=6;q<=w;q++)
	if(q%2==0)
		for(n=3;n<=q/2;n++)
			if(n%2!=0)
				if(a(n)==1&&a(q-n)==1)
				{
					printf("%d=%d+%d\n",q,n,q-n);
					break;
				}
}