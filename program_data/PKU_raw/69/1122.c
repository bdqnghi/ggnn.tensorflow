int main()
{
	char s1[300],s2[300];
	int a3[301]={0};
	cin.getline(s1,300);
	cin.getline(s2,300);
	int len1 = strlen(s1),len2 = strlen(s2);
	for (int i = 300; (i> 300-len1 || i>300-len2) ;i--)
	{
		if (len1+i-301>=0)
		{
		a3[i] += (int)(s1[len1+i-301])-48;
		}
		if (len2+i-301>=0)
		{
		a3[i]+= (int)(s2[len2+i-301])-48;
		}
		if (a3[i]>=10)
		{
			a3[i]-=10;
			a3[i-1]++;
		}
	}
	int k = 0;
	for (int i = 1; i<=300;i++)
	{
		if (a3[i]!=0)
		{
			k=1;
		}
		if (k==1)
		{
			cout<<a3[i];
		}
	}
	if (k==0)
		cout<<0;
}