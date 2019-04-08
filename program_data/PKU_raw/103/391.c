int main()
{
	char a[1000];
	int num[1000] = {0},i,j,len;
	cin>>a;
	len = strlen(a);
	for(i = 0;i < len ;i ++)
	{
		if(a[i] > 'Z')
		{
			a[i] = a[i] - 'a' + 'A';
		}
	}
	for(i =0; i < len ;i ++)
	{
		j = i;
		while(a[j] == a[i])
		{
			j ++;
			num[i] ++;
		}
		cout<<"("<<a[i]<<","<<num[i]<<")";
		i = j - 1;
	}
	return 0;
}