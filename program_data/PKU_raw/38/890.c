int main()
{
	int m,i,j;
	double a[100]={0},c=0,s=0,n;
	scanf("%d",&m);
	for(j=0;j<m;j++){
		double sum=0,ave=0, total=0,pf=0;
        scanf("%lf",&n);
		for(i=0;i<n;i++){
            
			scanf("%lf",&a[i]);
			sum+=a[i];
			ave=sum/n;
		}
		for(i=0;i<n;i++){
			
			pf=(a[i]-ave)*(a[i]-ave);
			total+=pf;
		}
		c=total/n;
		s=sqrt(c);
		printf("%.5lf\n",s);
		
	}
	return 0;
}
