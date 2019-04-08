int num1[1000]={0},num2[1000]={0},m,n;
void gets()
{
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		cin>>num1[i];
	for(j=0;j<n;j++)
		cin>>num2[j];
}
void paixu()
{
	int i,j,a=0,b=0;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(num1[j]>num1[j+1])
			{
				a=num1[j];
				num1[j]=num1[j+1];
				num1[j+1]=a;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num2[j]>num2[j+1])
			{
				a=num2[j];
				num2[j]=num2[j+1];
				num2[j+1]=a;
			}
		}
	}
}
void hebing()
{
	int i;
	for(i=0;i<n;i++)
		num1[m+i]=num2[i];
}
void shuchu()
{
	int i;
	cout<<num1[0];
	for(i=1;i<m+n;i++)
		cout<<" "<<num1[i];
}
int main()
{
	gets();
	paixu();
	hebing();
	shuchu();
		return 0;
}

