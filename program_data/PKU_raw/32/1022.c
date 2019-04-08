int main()
{
	void zuocha(void);
	int k,n;
	cin >> n;
	for (k=1;k<=n;k++)
		zuocha();
	return 0;
}

void zuocha(void)
{
	char str1[100],str2[100];
	int l1,l2;
	cin >> str1 >> str2;
	l1=strlen(str1);
	l2=strlen(str2);

	int num1[100],num2[100],cha[100];
	int i,j;
	
	for (i=0;i<l1;i++)
		num1[l1-1-i]=str1[i]-'0';
	for (i=0;i<l2;i++)
		num2[l2-1-i]=str2[i]-'0';
	for (i=l2;i<l1;i++)
		num2[i]=0;
	
	
	for (i=0;i<l1;i++)
		if (num1[i]>=num2[i])
		{
			cha[i]=num1[i]-num2[i];
		}
		else
		{
			cha[i]=num1[i]+10-num2[i];
			num1[i+1] -=1;
		}
	
	for (i=l1-1;i>=0;i--)
		if (cha[i]!=0)
			break;
	for (j=i;j>=0;j--)
		cout << cha[j];
	cout << endl;
}
