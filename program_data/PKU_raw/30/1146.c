int main()
{
int n,i,sum=0;
int s[101];
cin>>n;
for(i=1;i<=n;i++)
{
	s[i]=i;
if(s[i]/10!=7)
	
 if(s[i]-s[i]/10*10!=7)
	
  if(s[i]%7!=0)
	sum=sum+s[i]*s[i];
}

cout<<sum<<endl;
}
