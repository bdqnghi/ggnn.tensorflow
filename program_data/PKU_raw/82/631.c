int main()
{
   int n,a[100],b[100],i,c[100],j,d,p,q;
   j=0;
   d=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d %d",&(a[i]),&(b[i]));
    if((90<=a[i])&&(a[i]<=140)&&(60<=b[i])&&(b[i])<=90)
	{
           j++;
	}
   else
  {
	 d++;
     c[d]=j;
	 j=0;
   }
  }
   
  if(j!=0)
  {  
	 d++;
	 c[d]=j;
	 int max=0;
	 for(p=1;p<=d;p++)
	 {
	 if(c[p]>max)  
	 {
		 //q=c[d];
		 //c[d]=c[d+1];
		 //c[d+1]=q;
		 max=c[p];
	 }
	 }
  printf("%d",max);
  }
 else
 {int max=0;
     for(p=1;p<=d;p++)
	 {
	   if(c[p]>max)  
	 {
		 //q=c[d];
		 //c[d]=c[d+1];
		 //c[d+1]=q;
		 max=c[p];
	 }
	 }
   printf("%d",max);
 }
 
 return 0;
}
 
 
