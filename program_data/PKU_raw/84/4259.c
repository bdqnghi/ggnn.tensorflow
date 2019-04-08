int main()
{
	int z[100],n,i,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&z[i]);
	for(i=1,max=z[0],min=z[0];i<n;i++)
	{
		if(z[i]>max)
		{
			min=max;
			max=z[i];
		}
		else if(z[i]<max&&z[i]>min) min=z[i];
	}
	printf("%d\n%d\n",max,min);
	return 0;
}
