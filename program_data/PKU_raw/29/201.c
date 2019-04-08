int main()
{
	int n,m,i,j;
	double s=0,a1,b1,a2,b2,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=0;
		scanf("%d",&m);
		a1=1;b1=2;
		a2=2;b2=3;
			s=s+b1/a1;
		for(j=0;j<m-1;j++){
			s=s+b2/a2;
			b=b2;
			b2=b2+b1;

			b1=b;
			a=a2;
			a2=a2+a1;
			a1=a;

	
		}
		printf("%.3lf\n",s);
	}



	return 0;
}
