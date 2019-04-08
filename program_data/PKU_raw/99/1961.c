int main()
{
	int n,i;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	double o,p,q,r;
	int nl[101];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&nl[i]);
		if(nl[i]<=18){
			a++;
		}else if(nl[i]>=19&&nl[i]<=35){
			b++;
		}else if(nl[i]>=36&&nl[i]<=60){
			c++;
		}else if(nl[i]>=61){
			d++;
		}
	}
	o=1.0*a/n*100;
	p=1.0*b/n*100;
	q=1.0*c/n*100;
	r=1.0*d/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",o,p,q,r);
	return 0;
}

	