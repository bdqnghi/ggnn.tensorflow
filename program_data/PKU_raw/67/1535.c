
int main()
{ int n,i,x,y;
  float std,t;
  
  cin>>n;
  cin>>x>>y;
  std=1.0*y/x;
  for(i=1;i<n;i++)
  { cin>>x>>y;
    t=1.0*y/x-std;
    if(t>0.05) cout<<"better";
    else  if(t<-0.05) cout<<"worse";
          else cout<<"same";
    cout<<endl;
  }
  return 0;
}