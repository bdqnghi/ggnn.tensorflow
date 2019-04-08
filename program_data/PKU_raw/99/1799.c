int main(int argc, char* argv[])
{
	int a[100],i;
	double n,x=0,y=0,z=0,m=0;
	double j,k,l,f;
	scanf("%lf",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<=18)
			x++;
		else if(a[i]<=35)
			y++;
		else if(a[i]<=60)
			z++;
		else if(a[i]>60)
			m++;
	}
    j=(x/n)*100;
	k=(y/n)*100;
	l=(z/n)*100;
	f=(m/n)*100;
	printf("1-18: ");
	printf("%.2lf",j);
	printf("%%\n");
	printf("19-35: ");
	printf("%.2lf",k);
	printf("%%\n");
	printf("36-60: ");
	printf("%.2lf",l);
	printf("%%\n");
	printf("60??: ");
	printf("%.2lf",f);
	printf("%%");
	return 0;
}
