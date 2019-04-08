int main()
{
	int len,len1,m=1,p=0;
	char str[110],word[100][100],w1[100],w2[100];
	cin.getline(str,110,'\n');
	cin.getline(w1,100,'\n');
	cin.getline(w2,100,'\n');
	len=strlen(str)-1;
	len1=strlen(w2)-1;
	for(int i=0;i<=len;i++)
	{
		if(str[i]!=' ')
		{
			word[m][p]=str[i];
			p++;
		}
		if(str[i]==' ')
		{
			p=0;
			m++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(strcmp(word[i],w1)==0)
		{
			for(int j=0;j<=len1;j++)
				word[i][j]=w2[j];
			for(int j=len1+1;j<=98;j++)
				word[i][j]='\0';
		}
	}
	for(int i=1;i<=m-1;i++)
		cout<<word[i]<<" ";
	cout<<word[m]<<endl;
	return 0;
}