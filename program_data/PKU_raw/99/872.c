int main()
{
	int n,i;
	double a,b,c,d;
	double x,y,z,u;
	scanf("%d",&n);
	int sz[100];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]<=18)
			a++;
		else if(sz[i]>=19&&sz[i]<=35)
			b++;
		else if(sz[i]>=36&&sz[i]<=60)
			c++;
		else if(sz[i]>=61)
			d++;
	}
	x=(double)(a/n*100);
	y=(double)(b/n*100);
	z=(double)(c/n*100);
	u=(double)(d/n*100);
	printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%\n",x,y,z,u);
}