int num[1000]={0};
int jinwei[1000]={0};
int weishu=1;
int temp;
void multiply()
{
	int i;
	for (i=0;i<=weishu;i++)
	{
		temp=num[i]*2;
		num[i]=temp%10+jinwei[i];
		jinwei[i+1]=temp/10;
	}
	num[i]=jinwei[i];
	if (jinwei[weishu]==1)
	{
		weishu+=1;
	}
}
int main()
{
	int j,n;
	num[0]=1;
	cin >>n;
	for (j=0;j<n;j++)
	{
		multiply();
	}
	for (j=weishu-1;j>=0;j--)
	{
		cout <<num[j];
	}
	return 0;
}