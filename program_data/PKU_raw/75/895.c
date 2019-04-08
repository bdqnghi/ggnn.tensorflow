int main()
{
   int t[1000]={0};
   int x[1000],y[1000];
   int i,n=0;
   while(1)
   {
       cin>>x[n];
       n++;
       if(cin.peek()!='\n')
           cin.get();
       else
           break;
   }
   for(i=0;i<n;i++)
   {
       cin>>y[i];
       cin.get();
   } 
   for(i=0;i<n;i++)
   {
       for(int j=x[i];j<y[i];j++)
           t[j]++;
   }
   int max=0;
   for(i=0;i<1000;i++)
   {    if(t[i]>max)
              max=t[i];}
   cout<<n<<" "<<max;
   return 0;
}
 