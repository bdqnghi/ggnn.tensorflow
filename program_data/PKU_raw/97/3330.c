int main(){
int m;
 scanf("%d",&m);
 int a,b,c,d,e,f;
 a=m/100;
 b=(m-100*a)/50;
 c=(m-100*a-50*b)/20;
 d=(m-a*100-50*b-20*c)/10;
 e=(m-a*100-50*b-20*c-10*d)/5;
 f=(m-a*100-50*b-20*c-10*d-e*5)/1;
 printf("%d\n",a);
 printf("%d\n",b);
 printf("%d\n",c);
 printf("%d\n",d);
 printf("%d\n",e);
 printf("%d\n",f);
	  return 0;
}