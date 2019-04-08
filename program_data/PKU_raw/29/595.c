int main()
{
	int m,n[100],i,j,a[100],b[100];
	double c[100],sum[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
            if(j==0||j==1)b[j]=1+j;
		    else if(j>1)b[j]=b[j-2]+b[j-1];
		    if(j==0||j==1)a[j]=2+j;
		    else if(j>1)a[j]=a[j-2]+a[j-1];
            c[j]=1.0*a[j]/b[j];
			sum[i]=sum[i]+c[j];
		}
	}
	for(i=0;i<m;i++)printf("%.3lf\n",sum[i]);
	return 0;
}