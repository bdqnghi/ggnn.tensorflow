void main(){
int a,b, c, d;
c=0;
scanf("%d",&a);
for(b=1;b<=a;b++){
	if(b%7!=0)
		if(b%10!=7)
		  if(b/10!=7){
			c=c+b*b;}
}
printf("%d",c);
}