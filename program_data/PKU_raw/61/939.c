 int main()
{
   int k,s,g;
   int a[20];
   a[1]=1;
   a[2]=1;
   for(int j=3;j<=20;j=j+1)
   {
    a[j]=a[j-1]+a[j-2];
    }
   cin>>k;
   for(int i=0;i<k;i++)
   {
     cin>> g;
     s=a[g];
     cout<<s<<endl;   
    }
}