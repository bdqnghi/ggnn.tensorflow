
int main()
{   int n,a[100],i,j=0,sum=0;
  cin>>n;
  for(i=1;i<=n;i++)
  { if (i%7!=0&&(i-7)%10!=0&&i/10!=7)
  { a[j]=i;j++;}
  }
  for(i=0;i<j;i++)
  {  sum=sum+a[i]*a[i];}
  cout<<sum<<endl;

  
	return 0;
}

