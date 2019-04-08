int main(){
	int n,a,b,c,d,x,i;
	double e,f,g,h;
	a=0; 
	b=0; 
	c=0; 
	d=0;
    scanf("%d\n",&n);
	for(i=1;i<=n;i+=1){
    scanf("%d",&x);
	if(x<=18)
		a+=1;
	else if(x>=19&&x<=35)
		b+=1;
	else if(x>=36&&x<=60)
		c+=1;
	else if(x>=61)
		d+=1;
	}
	e=100*1.0*a/n;
	f=100*1.0*b/n;
	g=100*1.0*c/n;
	h=100*1.0*d/n;
	printf("1-18: %.2lf%%\n",e);
	printf("19-35: %.2lf%%\n",f);
    printf("36-60: %.2lf%%\n",g);
    printf("60??: %.2lf%%\n",h);
	return 0;
}