
void divide(int ,int s[],int q );
int main()
{
    int a,b,j,k,x[20]={-1,-1},y[20]={-2,-2};
    cin>>a>>b;
    divide(a,x,20);
    divide(b,y,20);
    for(int i1=1;i1<20;i1++)
    {
        if(x[i1]==1)
        {
        j=i1;
        break;
        }
    }
   //cout<<j<<endl;
    for(int i2=1;i2<20;i2++)
    {
        if(y[i2]==1)
        {
        k=i2;
        break;
       }   
    }
    //cout<<k<<endl;
    int p;
    for(p=0;;p++)
    {
        if(x[j-p]!=y[k-p])
        break;
        //cout<<p<<endl;
    }
   // cout<<p<<endl;
   // cout<<j-p+1<<endl;
    cout<<x[j-p+1]<<endl;
    ;
    return 0;
}
void divide(int t,int s[],int q)
{ 
  int i3=1;
  for(;t>1;i3++)
  {
     s[i3]=t;
     t=t/2;
  }
  s[i3]=t;  
} 
