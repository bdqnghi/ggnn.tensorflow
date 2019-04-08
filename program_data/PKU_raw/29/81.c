int main(){
	int m;
	int n;
	int i,k;
	int a[1000000];
	int b[1000000];
	double x,y;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		a[0]=2;a[1]=3;
		b[0]=1;b[1]=2;
		scanf("%d",&n);
		if(n==1)
		{
			x=a[0]*1.0/b[0];
			printf("%.3lf\n",x);
		}else if(n==2)
		{
			x=a[0]*1.0/b[0]+a[1]*1.0/b[1];
			printf("%.3lf\n",x);
		}else if(n>=3){
			y=a[0]*1.0/b[0]+a[1]*1.0/b[1];
			for(k=2;k<n;k++)
			{
				a[k]=a[k-1]+a[k-2];
				b[k]=b[k-1]+b[k-2];
				y=y+a[k]*1.0/b[k];
			}
			printf("%.3lf\n",y);
		}
	}
	return 0;
}