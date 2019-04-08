void main()
{
       int a[1000],*p,i,n,*p1;
	   scanf("%d",&n);
	   for(i=0;i<n;i++)
		   scanf("%d",&a[i]);
	   printf("%d",a[0]);
	   p=a+1;
	   for(;p<(a+n);p++)
	   {
		   for(p1=a;p1<p;p1++)
			  if(*p1==*p) break;
			  if(p1==p) printf(",%d",*p);
	   }
		   
}