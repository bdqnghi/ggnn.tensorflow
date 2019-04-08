int main(){
	int a;
	int b,c,d,f,e,g,h;
	scanf("%d",&a);
	b=a/100;
	c=(a%100)/50;
	d=(a%50)/20;
    e=(a%50%20)/10;
	f=(a%10)/5;
	g=a%5;
   printf("%d\n",b);
 printf("%d\n",c);
 printf("%d\n",d);
 printf("%d\n",e);
 printf("%d\n",f);
 printf("%d\n",g);
 
 return 0;
}

