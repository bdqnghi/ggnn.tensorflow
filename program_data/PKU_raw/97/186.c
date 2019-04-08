int main(){
int n,a,b,c,d,e,f;
scanf("%d",&n);
a=n/100;
if((n%100)/10==9){
	b=1;
	c=2;
	d=0;
}else if((n%100)/10==8){
	b=1;
	c=1;
	d=1;
}else if((n%100)/10==7){
	b=1;
	c=1;
	d=0;
}else if((n%100)/10==6){
	b=1;
	c=0;
	d=1;
}else if((n%100)/10==5){
	b=1;
	c=0;
	d=0;
}else if((n%100)/10==4){
	b=0;
	c=2;
	d=0;
}else if((n%100)/10==3){
	b=0;
	c=1;
	d=1;
}else if((n%100)/10==2){
	b=0;
	c=1;
	d=0;
}else if((n%100)/10==1){
	b=0;
	c=0;
	d=1;
}else if((n%100)/10==0){
	b=0;
	c=0;
	d=0;
}if((n%10)==9){
	e=1;
	f=4;
}else if((n%10)==8){
	e=1;
	f=3;
}else if((n%10)==7){
	e=1;
	f=2;
}else if((n%10)==6){
	e=1;
	f=1;
}else if((n%10)==5){
	e=1;
	f=0;
}else if((n%10)==4){
	e=0;
	f=4;
}else if((n%10)==3){
	e=0;
	f=3;
}else if((n%10)==2){
	e=0;
	f=2;
}else if((n%10)==1){
	e=0;
	f=1;
}else if((n%10)==0){
	e=0;
	f=0;
}
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}