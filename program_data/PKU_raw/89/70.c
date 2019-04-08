int main()
{
         int n;
         int x,y,t;
         cin>>n;
         int ans=0;
         int count[n];
         for(int i=0;i<n;i++)count[i]=0;
         while(cin>>x>>y)
         {
                  if(x==0 && y==0){break;}
                  else
                  {
                           count[y]++;
                  }
         }
         for(int i=0;i<n;i++)
         {
                                    if(count[i]==n-1){ans++;t=i;}
         }
         if(ans==1)cout<<t;
         else cout<<"NOT FOUND";
}
