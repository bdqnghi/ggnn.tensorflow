int main()
{
	
	//int temp = 0;
	char temp[252];
	int a[252];
	int b[252];
	int ans[252];
	int j1 = 0;
	memset(ans,0,sizeof(ans));
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s",temp);
	for(int i = strlen(temp)-1;i >= 0;i--)
	{
		a[j1++] = temp[i] - '0';
	}
	int j2 = 0;
	scanf("%s",temp);
	for(int i = strlen(temp)-1;i >= 0;i--)
	{
		b[j2++] = temp[i] - '0';
	}
	int j = max(j1,j2);
	memset(ans,0,sizeof(ans));
	for(int i = 0;i < j;i++)
	{
		ans[i] += a[i] + b[i];
		ans[i+1] +=ans[i]/10;
		ans[i] %= 10;
	}
	int key = 0;
	int tag = 0;
	for(int i = j;i >=0;i--)
	{
		if(ans[i] != 0)
			key = 1;
		if(key == 0)
			continue;
		cout<<ans[i];
		tag = 1;
	}
	if(tag == 0)
		cout<<0;
} 