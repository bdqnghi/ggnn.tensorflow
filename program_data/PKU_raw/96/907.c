int main()
{
	char num[110],a[3]={' ',' ','\0'},qq[110];                //????
	int i=0;
	cin >>num;
	int n=strlen(num);
	memset(qq,'\0',110);                                      //???
	while (i<n-1)
	{
		a[0]=num[i];a[1]=num[i+1];                            //????????????0??100
		int x=atoi(a);
		if (i>0&&num[i-1]>'0') x+=100;                 
		int t=x%13,q=x/13;                                    //??????
		qq[i]='0'+q;
		if (t>=10)                                            //??
		{
			t-=10;
			num[i]='1';num[i+1]='0'+t;
		}
		else 
		{
			num[i]='0';num[i+1]='0'+t;
		}
		i++;
	}
	if (n==1)
	{
		cout <<0 <<endl <<num;return 0;
	}
	if (qq[0]=='0'&&n>2)
	     for (int i=0;i<n;i++) qq[i]=qq[i+1];
	cout <<qq;
	cout <<endl ;
	if (num[n-2]!='0') cout <<num[n-2];
	cout <<num[n-1];
	return 0;
}