int main()
{
   int a[100];
   for (int i=2;i<=100;i++)
   {
	   a[i]=0;
   }
   int n;
   cin>>n;
   int b;
   cin>>b;
   cout<<b;
   a[b]=1;
   for (int i=2;i<=n;i++)
   {
	   //int b;
	   cin>>b;
	   if (a[b]==0)
	   {
		   a[b]=1;
		   cout<<' '<<b;
	   }
   }
}