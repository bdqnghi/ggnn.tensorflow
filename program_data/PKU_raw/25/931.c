int  main()
{ 
 int n,i,j,k,a[50];
 cin>>n;
 for(i=0;i<50;i++)
 { a[i]=0;}
  a[0]=1;
for(k=0;k<n;k++)
{
  for(i=0;i<50;i++)
   {
     a[i]=2*a[i];
   }
  for(i=0;i<50;i++)
  { 
    if(a[i]>=10)
     {
      a[i+1]=a[i+1]+1;
      a[i]=a[i]-10;  
     }
  }
}
 for(i=49;i>=0;i--)
{  if(a[i]!=0)
    break;  }
  for(j=i;j>=0;j--)
  {cout<<a[j];}
  cout<<endl;
 return 0;
}