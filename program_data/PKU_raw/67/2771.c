
int main()
{
    int n;
    double x,y,wine[2],improve[2];
    cin>>n;
    for(int i=0;i<2;i++)
    cin>>wine[i];
    x=wine[1]/wine[0];//??????????? 
    for(int i=1;i<n;i++)
    {
      cin>>improve[0]>>improve[1];
      y=improve[1]/improve[0];//?????????? 
      if(x-y>0.05)//?????? 
      cout<<"worse"<<endl;
      else if(y-x>0.05)
      cout<<"better"<<endl;
      else
      cout<<"same"<<endl;
    }
    return 0;
}
