int main ()
{
   int n,i,k=0;
   double a[100];
   cin>>n;
   for(i=1;i<=n;i++)
   {
    a[i]=i;
	if(i%7==0)
	{
	 a[i]=0;
	 continue;
	}
	else if(i%10==7)
	{
	 a[i]=0;
	 continue;
	}
	else if(i<=79&&i>=70)
	{
	 a[i]=0;
	 continue;
	}
   }
   for(i=1;i<=n;i++)
   
    k=k+pow(a[i],2);
   (int)k;
   cout<<k<<endl;
   return 0;
}