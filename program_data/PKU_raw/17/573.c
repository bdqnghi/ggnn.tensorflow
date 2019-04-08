int find(char s[], int pos)
{
	int i, p=0, q=0;
	if (pos<0)
		return 0;										//?????
	if (s[pos]==')')
		for (i=pos-1; i>=0; i--)
		{
			if (s[i]=='(')
				p++;
			if (s[i]==')')
				q++;									//??????????????
			if ((s[i]=='(')&&(p-q==1))
			{
				s[i]=' ';
				s[pos]=' ';
				break;									//?????????????
			}
		}
	find(s,pos-1);										//??????
	return 0;
}
int main()
{
	char s[101], ss[101], ans[101];
	int i, n;
	while (true)
	{
		cin >> s;
		if (!cin)
			break;
		strcpy(ss,s);
		memset(ans,' ',sizeof(ans));
		n=strlen(s)-1;									//??????
		find(s,n);										//???????
		for (i=0; i<=n; i++)
		{
			if (s[i]=='(')
				ans[i]='$';
			if (s[i]==')')
				ans[i]='?';								//????????????
		}
		ans[n+1]='\0';
		cout << ss << endl;
		cout << ans << endl;							//????????
	}
	return 0;											//main???????0
}