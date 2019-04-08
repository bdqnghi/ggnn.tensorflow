int main()
{
int i,n,j,k;
int flag1=0;
int flag2=0;
cin>>n;
for(j=3;j<=n/2;j=j+2)
{
  k=n-j;
  for(i=2;i<j;i++)
  {
	if(j%i==0)
       {
		flag1=1;
        break;
		}
  }
  for(i=2;i<k;i++)
  {
	if(k%i==0)
       {
		flag2=1;
        break;
		}
  }
  if(flag1!=1&&flag2!=1)
    cout<<j<<" "<<k<<endl;
  flag1=0;
  flag2=0;
}
;
return 0;
}