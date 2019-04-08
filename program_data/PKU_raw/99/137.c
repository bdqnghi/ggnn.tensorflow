int main()
{
int n,num[4]={0},i,a[1000];
cin>>n;
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
  if(a[i]<=18)
    num[0]++;
  else if(a[i]<36)
    num[1]++;
  else if(a[i]<61)
    num[2]++;
  else num[3]++; 
cout<<"1-18: "<<fixed<<setprecision(2)<<100.0*num[0]/n<<'%'<<endl;
cout<<"19-35: "<<fixed<<setprecision(2)<<100.0*num[1]/n<<'%'<<endl;
cout<<"36-60: "<<fixed<<setprecision(2)<<100.0*num[2]/n<<'%'<<endl;
cout<<"60??: "<<fixed<<setprecision(2)<<100.0*num[3]/n<<'%'<<endl; 
 
return 0; 
}