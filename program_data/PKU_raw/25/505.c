int main()
{
	int n,i,cnt=0,len1=1,len2=1;
	cin >> n;
	char a[100];
	a[0]=49;
	for(i=1; i<100; i++)
	{
		a[i]=48;
	}
	while(cnt<n)
	{
		for(i=len1-1; i>=0; i--)
		{
			if((a[i]-48)*2>=10)
			{
				a[i+1]+=1;
				if(i==len1-1)
				len2+=1;
			}
			a[i]=((a[i]-48)*2)%10+48;
		}
		len1=len2;
		cnt++;
	}
	for(i=len1-1; i>=0;i--)
		cout<<a[i];
	return 0;
}
