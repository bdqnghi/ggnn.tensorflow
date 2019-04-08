int main(int argc, char* argv[])
{   
	int i,j,k,n;
    double a[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	   double sum=0.00,aver=0.00,y=0.00,s=0.00;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
		    sum+=a[j];
		}
			aver=sum/j;
			for(j=0;j<n;j++)
			y=y+(a[j]-aver)*(a[j]-aver);
		s=sqrt(y/n);
	    printf("%.5lf\n",s);
	}
	return 0;
}