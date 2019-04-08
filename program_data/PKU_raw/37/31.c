int main()
{
	int t;
	cin >> t;
	for (int k=1;k<=t;k++)
	{
		cin.get();
		char str[1000002];
		cin.getline(str,1000002);
		int i,j,count,len;
		len=strlen(str);
		int p=len;
		for (i=0;str[i]!='\0';i++)
		{
			count=0;
			for (j=0;str[j]!='\0';j++)
			{
				if (str[i]==str[j]&&i!=j)
					break;
				else count++;
			}
			if ((count==len)&&(i<p))
				p=i;
		}
		if (p==len)
			cout << "no" << endl;
		else
			cout << str[p] << endl;
	}
	return 0;
}
