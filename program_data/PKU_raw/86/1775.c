int main()
{
	int i,n,m,k;
	int c[21];
	int j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&c[j]);
		}
		k=c[m]+(m-1)*3;
		if(k<=60)
		{
			if(k+3>60)
			{printf("%d\n",c[m]);}
			else
			printf("%d\n",60-m*3);
		}
		else
		{
			for(j=m;(c[j]+(j-1)*3)>60;j--)
			{;}
			if((c[j]+j*3)>60)
			{
				printf("%d\n",c[j]);
			}
			else
				printf("%d\n",60-j*3);
		}
		}
	}
	return 0;
}

