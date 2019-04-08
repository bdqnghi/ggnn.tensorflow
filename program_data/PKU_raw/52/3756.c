int main()
{
int n,m,i,j,*p,*t,a[100],temp;
cin>>n>>m;                                  //??????????? 
for(i=0,p=a;i<n;i++,p++)
  cin>>*p;                                 //???????? 
p=a+n-m-1;                                 //??????? 
for(i=n-m-1;i>=0;i--,p--)
{
  for(t=a+i+1,j=i+1;j<i+m+1;j++,t++)       //??????? 
    {
       temp=*(t-1);
       *(t-1)=*t;
       *t=temp;                         
    }
}
for(i=0;i<n;i++)                            //??????? 
{
  cout<<*(a+i);
  if(i!=n-1)
    cout<<' ';
} 
return 0; 
}
