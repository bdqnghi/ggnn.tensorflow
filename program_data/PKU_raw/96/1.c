int main()
{
	char str[100];
	char res[100];
	scanf("%s",str);
	int n= strlen(str);
	int mod = 0;
	int shang;
	mod = str[0]-'0';
	int nLag = 1;
	for(int i=1;i<n;i++)
	{
		mod = mod*10+str[i]-'0';
		shang = mod/13;
		if(i==1 && shang==0)
			nLag = 2;
		res[i] = '0'+shang;
		mod = mod%13;
	}
	res[n] = '\0';
	if(n<=nLag)
		printf("%s\n","0");
	else
		printf("%s\n",res+nLag);
	printf("%d\n",mod);
}
