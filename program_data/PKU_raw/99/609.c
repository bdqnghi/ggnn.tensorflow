int main()
{
	int n,i,p[100],a[4]={0,0,0,0};
	double b[4];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		if(p[i]<=18)a[0]++;
		else if(p[i]<=35)a[1]++;
		else if(p[i]<=60)a[2]++;
		else a[3]++;
	}
	for(i=0;i<4;i++)
	{
		b[i]=(double)a[i]/n;
		b[i]*=100.0;
	}
	printf("1-18: %.2f%%\n",b[0]);
	printf("19-35: %.2f%%\n",b[1]);
	printf("36-60: %.2f%%\n",b[2]);
	printf("60??: %.2f%%\n",b[3]);
	return 0;
}