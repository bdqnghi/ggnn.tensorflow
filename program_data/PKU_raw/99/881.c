int main()
{
	int i=0,n,age[100]={0};
	double a,b,c,d,m;
	scanf("%d",&n);
	m=n;
	while(i<n){
		scanf("%d",&age[i]);
	    i++;
	}
	for(i=0,a=b=c=d=0;i<n;i++){
		if(age[i]<=18)
			a++;
		else
			if(age[i]>=19&&age[i]<=35)
				b++;
			else
				if(age[i]>=36&&age[i]<=60)
					c++;
				else
					d++;
				}
	printf("1-18: %.2lf%%\n",a/m*100);
	printf("19-35: %.2lf%%\n",b/m*100);
	printf("36-60: %.2lf%%\n",c/m*100);
	printf("60??: %.2lf%%\n",d/m*100);
	return 0;
}

		