int main()
{
   int n,i;
   double m1,m2,m3,m4,s1=0,s2=0,s3=0,s4=0,a[200];
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%lf",&a[i]);
	   if(a[i]<=18){
          s1+=1;
	   }
	   if(a[i]>=19&&a[i]<=35){
          s2+=1;
	   }
	   if(a[i]>=36&&a[i]<=60){
		  s3+=1;
	   }
	   if(a[i]>=61){
		   s4+=1;
	   }
   }
   m1=s1/n*100;
   m2=s2/n*100;
   m3=s3/n*100;
   m4=s4/n*100;
   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",m1,m2,m3,m4);
   return 0;
}
