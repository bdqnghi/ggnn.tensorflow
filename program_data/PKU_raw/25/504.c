
int a[200]={2};

void cal(int a[200],int I,int n)
{
	if(I==n)
	{
		int i;
		for(i=199;i>0;i--) if(a[i]) break;
		for(;i>=0;i--) cout<<a[i];
		cout<<endl;
	}

	else
	{
		int result[200]={0};

		for(int i=0;i<200;i++)
		{
			result[i]+=a[i]*2;
			if(result[i]>=10)
			{
				result[i+1]+=result[i]/10;
				result[i]=result[i]%10;
			}
		}

		cal(result,I+1,n);
	}
}

int main()
{
	int n;
	cin>>n;
	if(!n) cout<<1;

	else cal(a,1,n);
	


	return 0;
}