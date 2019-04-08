int main()
{int n,Total,Well;
 float standard,temp;
 char a[3][10]={"better","same","worse"};
 cin>>n;
 cin>>Total>>Well;
 standard=Well/(float)Total;
 for(int i=0;i<n-1;i++)
 {cin>>Total>>Well;
  temp=Well/(float)Total;
  if(temp-standard>0.05)
   cout<<a[0]<<endl;
  else if(temp-standard<-0.05)
   cout<<a[2]<<endl;
  else
   cout<<a[1]<<endl;
 }
 return 0;
}
