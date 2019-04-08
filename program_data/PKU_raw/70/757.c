int main()
{
	double t,a[100][2],dd[100];
	int n,i,j,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf",&a[i][0],&a[i][1]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i<j)cnt++;
			dd[cnt]=pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2);
		}
		for(i=0;i<cnt-1;i++)
			for(j=0;j<cnt-1-i;j++)
			if (dd[j]<dd[j+1])
			{		
				t=dd[j];
				dd[j]=dd[j+1];
				dd[j+1]=t;
			}
			printf("%.4lf",sqrt(dd[0]));
			return 0;
			
}