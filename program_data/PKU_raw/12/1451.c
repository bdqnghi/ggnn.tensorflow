
int main()
{
	int i,j,k,sum,e=0;
	int a[20];
	for(;;)
	{
	
		sum=0;
		for(i=0;;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				i--;
				break;
			}
			else if(a[i]==-1) {e=-1; break;}
		}
		if(e==-1) break;
		for(j=0;j<=i;j++)
		{
			for(k=0;k<=i;k++)
			{
				if(a[k]==a[j]*2)
				{
					sum++;break;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}