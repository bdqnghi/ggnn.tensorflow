int main()
{
	 int n,a,b,c,d;
     scanf("%d",&n);
	 if(n<10)
		 printf("%d",n);
	 if(n>10&&n<100)
	 {	 a=n%10;
	     b=n/10;
		 n=10*a+b;
	 printf("%d",n);}
	 if(n>100&&n<1000)
	 {
		 a=n%10;
		 b=(n%100-a)/10;
		 c=n/100;
		 n=100*a+10*b+c;
		 printf("%d",n);
	 }
	 if(n>1000&&n<10000)
	 {
		 a=n%10;
		 b=(n%100-a)/10;
		 c=(n%1000-10*b-a)/100;
		 d=n/1000;
		 n=1000*a+100*b+10*c+d;
		 printf("%d",n);
	 }
         if(n==10) printf("01");
         if(n==100) printf("001");
         if(n==1000) printf("0001");
         if(n==10000) printf("00001");
		
	return 0;
}



		
	