int main()
{
	int m,i,j,n[999];
	double sum,x[999];
	scanf("%d",&m);
	for(i=1;i<=m;i++)
		scanf("%d",&n[i-1]);
	x[0]=1.0;x[1]=2.0;
	for(i=3;i<=999;i++)
	    x[i-1]=x[i-2]+x[i-3];
    for(i=1;i<=m;i++)
	   {sum=0;
		for(j=1;j<=n[i-1];j++)
	    sum=sum+x[j]/x[j-1];
	    printf("%.3lf\n",sum);}

	return 0;
}