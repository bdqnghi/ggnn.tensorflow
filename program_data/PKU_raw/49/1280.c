char a[500]={'\0'};
char b[500]={'\0'};
int L=0;
void check(char a[])		//???????????
{
	int la=strlen(a);
	int i=0,j=la-1;
	do
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
		}
		else
		{
			return ;
		}
	}while(i<=j);
	cout<<a<<endl;
}
int main()
{
	cin>>a;
	L=strlen(a);
	int s,i,j;
	for(s=2;s<=L;s++)
	{
		for(i=0;i<=L-s;i++)
		{
			char *p=&a[i];
			for(j=0;j<s;j++)
			{
				b[j]=*p;
				p++;
			}
			check(b);
		}
	}

	return 0;
}
