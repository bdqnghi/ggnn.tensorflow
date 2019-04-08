
int main()
{
   int n,i;
   double a,b,c,d;
   scanf("%d\n",&n);
   i=1;
   a=0;
   b=0;
   c=0;
   d=0;
   while(i<=n){
	   int e;
	   scanf("%d",&e);
       if(e<=18){
		   a++;
	   }else if(e>=19&&e<=35){
		   b++;
	   }else if(e>=36&&e<=60){
		   c++;
	   }else{
		   d++;
	   }
	   i++;
   }
   printf("1-18: %.2lf%%\n",a*100/(a+b+c+d));
   printf("19-35: %.2lf%%\n",b*100/(a+b+c+d));
   printf("36-60: %.2lf%%\n",c*100/(a+b+c+d));
   printf("60??: %.2lf%%\n",d*100/(a+b+c+d));
   return 0;
}