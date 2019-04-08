void main()
{
	int k,i,j,h[25]={0},n[25]={1},num;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&h[i]);
	for(i=k-2;i>=0;i--)
	{	for(j=i+1;j<k;j++)
		{
			if(h[i]>=h[j]&&n[i]<n[j]+1)
				n[i]=n[j]+1;
		}
	}
	num=n[0];
	for(i=0;i<k;i++)
	{
		if(num<n[i])
			num=n[i];
	}
	printf("%d",num+1);

}
