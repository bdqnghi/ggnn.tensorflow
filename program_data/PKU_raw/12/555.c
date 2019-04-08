void main()
{
	int i,j,k,a[16],s,q;
	do
	{
    scanf("%d",&q);
	a[0]=q;
	if(q==-1) break;
	for(i=1;i<=15;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]==0) break;
		}
	s=0;
	for(j=0;j<i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[j]==2*a[k]) s=s+1;
				else s=s;
			}
		}
		printf("%d\n",s);
	}
	while(q!=-1);
}
