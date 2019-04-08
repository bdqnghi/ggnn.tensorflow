int main(){
	int n,a,b,c,d,i;
	int m[100];
	double a1,b1,c1,d1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	a=0;
	b=0;
	c=0;
	d=0;
	for(i=0;i<n;i++){
		if(m[i]<=18)
			a++;
		else{
			if(m[i]<=35)
				b++;
			else{
				if(m[i]<=60)
					c++;
				else
					d++;
			}
		}
	}
	a1=(double)a/n;
	b1=(double)b/n;
	c1=(double)c/n;
	d1=(double)d/n;
	a1=a1*100;
	b1=b1*100;
	c1=c1*100;
	d1=d1*100;
	printf("1-18: %.2lf%%\n",a1);
	printf("19-35: %.2lf%%\n",b1);
	printf("36-60: %.2lf%%\n",c1);
	printf("60??: %.2lf%%\n",d1);
	return 0;
}