void main()
{
	int n,i,j;
	float ave,a[305][2],t[2],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i][0]);
	for(i=0;i<n;i++)
		sum=sum+a[i][0];
	ave=sum/n;

	for(i=0;i<n;i++)
		a[i][1]=fabs(a[i][0]-ave);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if((a[j][1]>a[i][1])||((a[j][1]==a[i][1])&&(a[j][0]<a[i][0])))
			{
				t[0]=a[i][0];
				t[1]=a[i][1];
				a[i][0]=a[j][0];
				a[i][1]=a[j][1];
				a[j][0]=t[0];
				a[j][1]=t[1];
			}
		}
		printf("%.0f",a[0][0]);
		for(i=1;i<n;i++)
		{
			if(a[i][1]==a[0][1])
				printf(",%.0f",a[i][0]);
		}


}
