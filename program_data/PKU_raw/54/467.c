void main()
{
   double n,k,x,y,z,a,r;
   scanf("%lf %lf",&n,&k);
   for(a=1;;a++)
   {
   	   for(x=1,r=0,y=a*n+k;x<=n-1;x++)
   	   {z=y-(int)(y);if(z!=0) r=r+1;y=y*n/(n-1)+k;}   	   	
   	   z=y-(int)(y);if(z==0&&r==0) break;
   }
   printf("%.0lf",y);   	      	
}
