int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j;
		scanf("%d",&m);
		int*sz
			=(int*)malloc(sizeof(int)*m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&sz[j]);
		}
		int sum;
		for(j=0;j<m;j++)
		{
			sum=sz[j]+3*(j+1);
	        if((63-sum)<=3&&(63-sum)>=0)
			{printf("%d\n",sz[j]);
			break;}
			if(sum>63)
			{
				printf("%d\n",60-3*j);
				break;
			}
		}
	    if((sz[m-1]+3*m)<60)
		{printf("%d\n",60-3*m);}
	}
	return 0;
}
