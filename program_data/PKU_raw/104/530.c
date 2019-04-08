int main()
{
int x,y,xx[100]={0},yy[100]={0},i=1,j=1,k,l;
cin>>x>>y;
if(x==y)
  {
     cout<<x;
     return 0;      
  }
if(x==1||y==1)
{
   cout<<1;
   return 0;              
}
xx[0]=x;
yy[0]=y;   
while(x!=0)
{
  xx[i]=x/2;
  x/=2;
  i++;         
}
while(y!=0)
{
  yy[j]=y/2;
  y/=2;
  j++;         
}

for(k=0;k<i;k++)
{
  for(l=0;l<j;l++)
    if(xx[k]==yy[l])
      break;
  if(xx[k]==yy[l])
      break;
}
cout<<xx[k]; 
 
return 0; 
}
