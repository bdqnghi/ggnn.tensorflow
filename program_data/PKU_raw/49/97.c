int main()
{
	char str[503];
	int i, j, k, p, m, l;
	cin >> str;
	l=strlen(str);
	for (m=2;m<=l;m=m+1)
	{
		for (i=0;str[i+1]!='\0';i++)
		{
			if (m%2==0)
			{
				j=i;
				p=i+1;
			}
			else
			{
				j=i-1;
				p=i+1;
			}
			while (str[j]==str[p]&&j>=0&&str[p]!='\0')
			{
				j--;
				p++;
				if ( p!=(i+1) && ((p-j-1)==m) )
				{
					for (k=j+1;k<p;k++)
						cout << str[k];
					cout << endl;
				}
			}		
		}
	}	
	return 0;
}