int main()
{
	int n,i,j,s;
	double x[1000],b[100]={0.00},sum=0.0000000000,ave,p=0.0000000000000,r;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=(int)(s);
		s=0;
		sum=0.0000000;
                  ave=0.00000;
                  r=0.00000;
                  p=0.000000;
		scanf("%d",&s);
		for(j=0;j<s;j++){
			scanf("%lf",&x[j]);
			sum+=x[j];
		}
		ave=sum/(double)(s);
		for(j=0;j<s;j++){
			p=p+(double)(pow(fabs((x[j]-ave)),2.00));
		}
		r=p/(double)(s);
		b[i]=(double)(sqrt(r));
		for(j=0;j<s;j++){
			x[j]=0.0000;
		}
		
	
	

	}
	for (i=0;i<n;i++){
		printf("%.5lf\n",b[i]);
	}
	return 0;
}
