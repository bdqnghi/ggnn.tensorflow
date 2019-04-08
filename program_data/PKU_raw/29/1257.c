
int main()
{
	int i, j, m, n  ;
	double a=1, b=1, s=0,t;
	double d,sum[MAX];
    scanf("%d",&m);
   
	for(i=0;i<m;i++){
		s=0;
		a=1;b=1;
		scanf("%d",&n);
		for(j=1;j<=n;j++){
			d=(a+b)/b;
			s=s+d;
			t=b;
			b=a+b;
			a=t;
		}
		sum[i]=s;
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",sum[i]);
	}

   return 0;
}

