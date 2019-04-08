//????
int main()
{
	int n=0,i=0,num[100],temp=0;
	cin>>n;
	for(i=0;i<n;i++)//????
		cin>>num[i];
	for(i=0;i<(n/2);i++)
	{
		temp=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	{
          if(i!=n-1)   
             cout<<num[i]<<" ";
          else
             cout<<num[i];
         }
	return 0;
}