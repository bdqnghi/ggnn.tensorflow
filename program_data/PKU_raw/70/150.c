int main()
{
  int n,i,j,k;
  double a,b,d=0,l;
   struct {
     double y,x;
   }  piont[10000];
   scanf("%d\n",&n);
	   for(i=0;i<n;i++)
   {
	   scanf("%lf %lf",&a,&b);
	   piont[i].x=a;
	   piont[i].y=b;
   }
   for(i=0;i<n;i++)
   {
	   for(j=0;j<i;j++)
	   {  l= sqrt((piont[i].x-piont[j].x)*(piont[i].x-piont[j].x)
         +(piont[i].y-piont[j].y)*(piont[i].y-piont[j].y));
		   if(l>=d)
		 d=l;
		  
	   }
   }
  printf("%.4lf",d);
   
  
	return 0;
}


