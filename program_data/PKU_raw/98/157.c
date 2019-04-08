int n=0,len[1001]={0},sum=0;
char str[1001][101]={0};
void f(int start)
{
	int sum=0,k=0;
	if(start>n)
	{
	}
	else
	{
		cout<<str[start];
		sum=strlen(str[start]);
		for(k=start+1;k<=n;k++)
		{
			if((sum+len[k])<80)
			{
				sum+=len[k]+1;
				cout<<" "<<str[k];
			}
			else
			{
				break;
			}
		}
		start=k;
		cout<<endl;
		f(start);
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>str[i];
		len[i]=strlen(str[i]);
	}
	f(1);
	return 0;
}