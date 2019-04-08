int main()
{
  char a[100]={'\0'};
  int i,j,k,t,m,b[100]={0},c[100];
  cin>>a;
  for(i=0;i<100;i++)
   if(a[i]=='\0') break;
   k=i;
   for(i=0;i<k;i++)
    b[i]=a[i]-'0'; //for(i=0;i<k;i++)cout<<b[i];cout<<endl;
    if(k>1){
    m=b[0]*10+b[1];
    if(m<13&&k==2)cout<<"0"<<endl<<m;
     else{
   for(i=2;i<=k;i++)
     { 
       c[i]=m/13;t=m%13;
       m=(m-c[i]*13)*10+b[i];
     }
    for(j=0;j<4;j++)
    if(c[j]!=0)break;
     for(i=j;i<=k;i++)
      cout<<c[i];cout<<endl;
      cout<<t;}
      }
      else cout<<"0"<<endl<<b[0];
    
      return 0;
  }
      
    
