char big(char x);
int main()
{
	char a[1003];
	char t;
	int sum=0,i,len;
	cin>>a;
	len=strlen(a);
	sum=1;
	t=big(a[0]);
	for(i=1;i<len;i++)
	{
		if(big(a[i])==t) sum++;
		if(big(a[i])!=t)
		{
			cout<<"("<<t<<","<<sum<<")";
			sum=1;
			t=big(a[i]);
		}
	}
	cout<<"("<<t<<","<<sum<<")";
	return 0;
} 
char big(char x)
{
	if(x>='a'&&x<='z') return(x-'a'+'A');
	else return x;
}