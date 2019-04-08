
int main()
{ float n,a[2],b[50][2]={0},x,y[50];
int i,j;
  cin>>n>>a[0]>>a[1];
  for(i=0;i<n-1;i++)
  {cin>>b[i][0]>>b[i][1];}
  x=a[1]/a[0];
  for(i=0;i<n-1;i++)
  {y[i]=b[i][1]/b[i][0];
  if(y[i]-x>0.05) cout<<"better"<<endl;
  else if(x-y[i]>0.05) cout<<"worse"<<endl;
  else cout<<"same"<<endl;
  }
  return 0;

  
}