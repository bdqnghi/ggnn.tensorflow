
int main(int argc, char* argv[])
{
	int k,i,n;
	

	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		int j;
		float a[100];
		double b=0.0;
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[j]);
		    
			b+=a[j];
		}
		b=(double)b/n;
		double s=0;
		for(j=0;j<n;j++)
		{
			
			s+=(a[j]-b)*(a[j]-b);
		}
		s=(double)(s/n);
		s=sqrt(s);
		printf("%.5f\n",s);
	}
	
	return 0;
}

