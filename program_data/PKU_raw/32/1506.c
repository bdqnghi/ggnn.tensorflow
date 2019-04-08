int main()
{
	int n,i,j;
	char str1[101],str2[101];
	cin>>n;
	while(n>0)
	{
		int anlen1[100]={0,},anlen2[100]={0,};
		cin>>str1>>str2;
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		j=0;
		for(i = len1-1;i >= 0;i--)
			anlen1[j++] = str1[i] - '0';
		j=0;
		for(i = len2-1;i >= 0;i--)
			anlen2[j++] = str2[i] - '0';
		for(i = 0;i < len1;i++)
		{
			if(anlen1[i] >= anlen2[i])
				anlen1[i] -= anlen2[i];
			else
			{
				anlen1[i] = anlen1[i] - anlen2[i] + 10;
				anlen1[i+1]--;
			}
		}
		i = len1-1;
		while(anlen1[i] == 0) i--;
		for(;i >= 0;i--)
			cout<<anlen1[i];
		cout<<endl;
		n--;
	}
return 0;
}
