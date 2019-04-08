int main()
{
	char a[251],b[251];
	cin>>a>>b;
	int a1=strlen(a);
	int b1=strlen(b);
	int num1[251]={0},num2[251]={0},j=0,i;
	for(i=a1-1;i>=0;i--)
	{
		num1[j]=a[i]-'0';
		j++;
	}
	j=0;
	for(i=b1-1;i>=0;i--)
		{
			num2[j]=b[i]-'0';
			j++;
		}
	j=0;
	int sum[251]={0};
	for(i=0;i<251;i++)
	{
		sum[i]=(num1[i]+num2[i]+j)%10;
		j=(num1[i]+num2[i]+j)/10;
	}
	for(i=250;i>=0;i--)
	{
		if(sum[i]!=0)
			break;
	}
	if(i==(-1))
		cout<<'0';
	for(j=i;j>=0;j--)
		cout<<sum[j];
	return 0;
}