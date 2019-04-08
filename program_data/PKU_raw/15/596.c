
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int k,l,p,q,a1=0,a2=0,b1,b2;
	int s;
	for(k=0;k<n;k++)
	{
		for(l=0;l<n;l++)
		{
			if(a[k][l]==0)
			{
				a1=k;
				b1=l;
				break;
			}
		}
		if (a1!=0)
		    break;
	}
	for(p=n-1;p>=0;p--)
	{
		for(q=n-1;q>=0;q--)
		{
			if(a[p][q]==0)
			{
				a2=p;
				b2=q;
				break;
			}
		}
		if(a2!=0)
		    break;
	}
	s=(a2-a1-1)*(b2-b1-1);
	printf("%d\n",s);
	return 0;
}