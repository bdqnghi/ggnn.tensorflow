int main(){
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n%10;
	if(d==0){
		printf("%d\n",e);
	}else if(c==0){
		printf("%d%d\n",e,d);
	}else if(b==0){
		printf("%d%d%d\n",e,d,c);
	}else if(a==0){
		printf("%d%d%d%d\n",e,d,c,b);
	}else{
		printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
	return 0;
}


