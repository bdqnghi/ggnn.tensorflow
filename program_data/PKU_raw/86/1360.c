int main()
{
 int n,i;
 cin>>n;
 for(i=1;i<=n;i++)
  {
   int a[20],j;
   cin>>a[0];
   for(j=1;j<=a[0];j++)
   cin>>a[j];
   if(a[a[0]]+3*a[0]<=60)
    cout<<60-3*a[0]<<endl;
   else
   {
    for(j=a[0];j>=1;j--)
     {
      if(a[j]+3*j<=60)
        {
         if((a[j+1]+3*j)<=60)
           cout<<a[j+1]<<endl;
         else
         cout<<60-3*j<<endl;
         break;
        }
      }
    }
  }
return 0;
}
   