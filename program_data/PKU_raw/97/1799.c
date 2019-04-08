int main(){
	int p,a,b,c,d,e,f,x,y,w;
	scanf("%d",&p);
	w=p%10;
	a=p/100;
	x=(p-100*a)/10;
	if(x>=5){
		b=1;
		y=x-5;
	}else{
		b=0;
		y=x;
	}
	if(y==4){
		c=2;
		d=0;
	}else if(y==3){
		c=1;
		d=1;
	}else if(y==2){
		c=1;
		d=0;
	}else if(y==1){
		c=0;
		d=1;
	}else if(y==0){
		c=0;
		d=0;
	}
	if(w>=5){
		e=1;
		f=w-5;
	}else if(w<5){
		e=0;
		f=w;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}
	
