int main(){
	int n;
	int num;
	int i=1;
	int p=0,q=00,u=0,t=0;
	double a,b,c,d;
	scanf("%d\n",&n);
	while(i<=n){
		scanf("%d",&num);
		if((num>=1)&&(num<=18)){
			p+=1;
		}else if((num>=19)&&(num<=35)){
			q+=1;
		}else if((num>=36)&&(num<=60)){
			u+=1;
		}else{
			if((num>60)&&(num<=100)){

			t+=1;
			}
		}
		i++;
	}
	a=p*1.0/n*100;
	b=q*1.0/n*100;
	c=u*1.0/n*100;
	d=t*1.0/n*100;
	printf ("1-18: %.2lf%%\n",a);
	printf ("19-35: %.2lf%%\n",b);
	printf ("36-60: %.2lf%%\n",c);
    printf ("60??: %.2lf%%\n",d);
	return 0;
}