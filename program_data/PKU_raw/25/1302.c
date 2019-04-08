//***************************
//*?????2?N??        **
//*??????             **
//*???2013.11.15         **
//***************************
int main()
{ 
   int i,j,k,n;
   cin>>n;
   int a[52];
	if(n==0)
	{
		cout<<"1"<<endl;
	}
	else
	{
		for(i=0;i<=50;i++)
		{
			a[i]=0;
		}
		a[51]=1;
		for(i=0;i<n;i++)
		{
			for(j=51;j>=0;j--)
			{
				a[j]=a[j]*2;
			}
			for(k=51;k>=0;k--)
			{
				if(a[k]>=10)
				{
					a[k-1]+=a[k]/10;
					a[k]=a[k]%10;
				}
			}
		}
        for(i=0;i<=51;i++)
		{
			if(a[i]!=0)
			{
				k=i;
				break;
			}
		}
		for(j=k;j<=51;j++)
		{
			cout<<a[j];
		}
        cout<<endl;
		}
	return 0;
}