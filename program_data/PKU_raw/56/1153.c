int main(int argc, char* argv[])
{
	int n,a,b,c,e,f,w;
	scanf("%d",&n);
	if(n>=1&&n<=9){
		printf("n");
	}
	if(n>10 && n<100 ){
		a = n/10;
	    b =n%10;
		w = b*10+a;
	    printf("%d",w);
	}
	if(n>100 && n<1000){
		a = n/100;
		b = n/10-a*10;
		c = n%10;
		w = c*100+b*10+a;
		printf("%d",w);
	}
	if(n>1000 && n<10000){
		a = n/1000;
		b = n/100-a*10;
		c = n/10-a*100-b*10;
		e = n%10;
		w = e*1000+c*100+b*10+a;
		printf("%d",w);
	}
	if(n>10000 && n<100000){
		a = n/10000;
		b = n/1000-a*10;
		c = n/100-a*100-b*10;
		e = n/10-a*1000-b*100-c*10;
		f = n%10;
		w = f*10000+e*1000+c*100+b*10+a;
		printf("%d",w);
	}
    return 0;
}

