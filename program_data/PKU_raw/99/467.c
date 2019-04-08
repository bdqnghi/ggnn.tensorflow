int main()
{
   int s[100],i;
   double n,a=0,b=0,c=0,d=0;
   scanf("%lf",&n);
   for(i=0;i<n;i++){
   	scanf("%d",&s[i]);
   }
   for(i=0;i<n;i++){
   	if(s[i]>=1&&s[i]<=18)
   	a++;
   	else if(s[i]>=19&&s[i]<=35)
   	b++;
   	else if(s[i]>=36&&s[i]<=60)
   	c++;
   	else
   	d++;
   }
   a=a/n*100;
   b=b/n*100;
   c=c/n*100;
   d=d/n*100;
   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a,b,c,d);
   return 0;
}
