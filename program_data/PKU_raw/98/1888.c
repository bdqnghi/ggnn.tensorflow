//************************************
//??:????
//??:2013.12.20
//************************************
int main()
{
	int n=0,i=0,b[50],l=0,sum=0,j=0,k=0,sum2=0;
	char a[10000];
	cin>>n;
	cin.get();
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
			l++;
		else
		{
			sum=sum+l;
			if(sum>80)
			{     
				b[j]=sum-l-1;
				j++;
				sum=l+1;  
			}
			else if(sum==80)
			{     b[j]=sum;j++;sum=0;       }
			else 
				   sum=sum+1;
			l=0;
		}
	}
	b[j]=sum+l;
	j=0;
	for(i=0;i<strlen(a);i++)
	{
		cout<<a[i];
		sum2++;
		if(sum2==b[j])
		{
			cout<<endl;
			i++;
			j++;
			sum2=0;
		}
	}
	return 0;
}