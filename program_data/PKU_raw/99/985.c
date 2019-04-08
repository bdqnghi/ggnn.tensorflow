int main(){
	int n;
	int num;
	int i=1,a=0,b=0,c=0,d=0;
	scanf("%d",&n);
    double e,f,g,h;
	while(i<=n){
		scanf("%d",&num);
		if(num<19){
			a++;
		}else if(num<36){
			b++;
		}else if(num<61){
			c++;
		}else{
			d++;
		}
		i++;
		continue;
	}
	e=a;
	f=b;
	g=c;
	h=d;
	e=e/n*100;
	f=f/n*100;
	g=g/n*100;
	h=h/n*100;
	printf("1-18:% .2lf%%\n",e);
	printf("19-35:% .2lf%%\n",f);
	printf("36-60:% .2lf%%\n",g);
	printf("60??:% .2lf%%\n",h);
	return 0;
}