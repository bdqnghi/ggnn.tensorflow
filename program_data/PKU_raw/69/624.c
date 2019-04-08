int main()
{
	unsigned an1[250],an2[250];char s1[251],s2[251];//????????????
	int l1,l2;
	cin >> s1 >> s2;                                //????????
	l1=strlen(s1);l2=strlen(s2);
	memset(an1, 0, sizeof(an1));
	memset(an2, 0,sizeof(an2));
	int i=0,j=0;
	for(i=l1-1;i>=0;i--)                           //?????????
		an1[j++]=s1[i]-'0';
	j=0;
	for(i=l2-1;i>=0;i--)
		an2[j++]=s2[i]-'0';
	for (i = 0; i < 250 ;i++)
	{
		an1[i] += an2[i];
		if(an1[i] >= 10)                          //???
		{
			an1[i]-=10;
			an1[i+1]++;
		}
	}
	i = 249;
	while(an1[i]==0&&i>0) i--; //???????0??
	if(i==0)
		cout << an1[0] << endl;
	else
	{for(;i >= 0; i--)
		cout << an1[i]; //??????
	cout << endl;
	}
	return 0;
}

