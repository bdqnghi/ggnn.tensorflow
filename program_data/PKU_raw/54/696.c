int main()
{
   int m,n,k,x,flag;
   cin>>n>>k;
   for(m=1;;m++)
   {
       x=m;
	   flag=1;
	   for(int i=0;i<n;i++)
	   {
		   if((x-k)%n!=0||x<n+k)
		   {
			   flag=0;
			   break;
		   }
		   else
			   x=(x-k)*(n-1)/n;
	   }
	   if(flag)
	   {
		   cout<<m<<endl;
		   break;
	   }
   }
   return 0;
}