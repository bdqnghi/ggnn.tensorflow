int main()
{
 int max[2]={0};
 int n,number;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>number;
  if(number>max[0])
  {
   max[1]=max[0];
   max[0]=number;
  }
  else if(number>max[1])
  {
   max[1]=number;
  }
 }
 cout<<max[0]<<endl<<max[1]<<endl;
 return 0;
} 