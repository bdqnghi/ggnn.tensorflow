int main()
{ //cout<<setiosflags(ios::fixed)<<setprecision(4);
  int n,i;
  float a,b,cx,cd,c,c0;
  cin>>n;
  cin>>a>>b;
  c0=b/a;
  cx=c0-0.05;
  cd=c0+0.05;
  for (i=1;i<=n-1;i++) 
    { cin>>a>>b;
      c=b/a;
      if (c>cd-1e-9) cout<<"better"<<endl;
      if (c<cx+1e-9) cout<<"worse"<<endl;
      if ((c<cd-1e-9)&&(c>cx+1e-9)) cout<<"same"<<endl; }
   return 0;
}
        
