int main()
{
   int n,i,j=0,a[100],b[100],c[100],m;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d%d",&a[i],&b[i]);
	   c[i]=0;
   }
   for(i=0;i<n;i++)
   {
	   if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		   c[j]++;
	   else 
	   {
		   j++;
	   }
   }
   m=c[0];


   for(i=0;i<j+1;i++)
   {
	   
	   if(m<c[i])
	   {
		   m=c[i];

	   }

   }
   printf("%d",m);
	return 0;
}