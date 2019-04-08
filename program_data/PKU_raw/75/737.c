int main()
{
	int a[1000][2]={0},c[1000]={0},i,j,k=0,sum=0,max,min;
	char b;
	for(i=0;i<1000;i++)
	{
		scanf("%d%c",&a[i][0],&b);
		sum++;
		if(b!=',')
			break;
	}
	for(i=0;i<sum;i++)
		scanf("%d%c",&a[i][1],&b);
	min=a[0][0];
	max=a[0][1];
	for(i=0;i<sum;i++)
	{
		if(a[i][0]<min)
			min=a[i][0];
		if(a[i][1]>max)
			max=a[i][1];
	}
	for(i=min;i<max-1;i++)
	{
		for(j=0;j<sum;j++)
		{
			if((a[j][0]<i||a[j][0]==i)&&(a[j][1]>i+1||a[j][1]==i+1))
				c[k]++;
		}
		k++;
	}
	max=c[0];
	for(i=0;i<k;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	printf("%d %d",sum,max);
	return 0;
}