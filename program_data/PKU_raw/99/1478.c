int main()
{
   int n,a[100],s[4]={0},i;
   double c[4];
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   scanf("%d",&a[i]);
   if(a[i]>=1&&a[i]<=18)
	   s[1]+=1;
   else if(a[i]>=19&&a[i]<=35)
	   s[2]+=1;
   else if(a[i]>=36&&a[i]<=60)
	   s[3]+=1;
   else if(a[i]>=60)
	   s[4]+=1;
   }
   for(i=1;i<=3;i++){
	   c[i]=(double)s[i]/n;
   }
   c[4]=1.000000-c[1]-c[2]-c[3];
   printf("1-18: %.2lf%%\n",c[1]*100);
   printf("19-35: %.2lf%%\n",c[2]*100);
   printf("36-60: %.2lf%%\n",c[3]*100);
   printf("60??: %.2lf%%\n",c[4]*100);
   return 0;
}
