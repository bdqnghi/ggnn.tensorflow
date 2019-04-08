int main()
{
	int n,i,j,m,t[10],s,k=60;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
			printf("%d\n",k);
		else if(m>0)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&t[j]);
				if((t[j]+3*(j+1))<=60)
					s=t[j]+60-(t[j]+3*(j+1));
				else if((t[j]+3*j)<=60)
					s=t[j];
			}
			printf("%d\n",s);
		}
	}
	return 0;
}