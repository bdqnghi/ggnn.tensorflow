int main()
{
	double a,b,c,d;
	int n,e=0,f=0,g=0,h=0,i;
	int sz[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if (sz[i]<=18)
			e+=1;
		else if(sz[i]>18 && sz[i]<=35)
			f+=1;
		else if(sz[i]>35 && sz[i]<=60)
			g+=1;
		else if(sz[i]>60)
			h+=1;
	}
	a=100.0*e/n;
	b=100.0*f/n;
	c=100.0*g/n;
	d=100.0*h/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a,b,c,d);
	return 0;
}

