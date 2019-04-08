
char boy;

void f(char *s)
{
	int i,j,counter=0;
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]==boy)
		{
			for (j=i+1;s[j]!='\0';j++)
			{
				if (s[j]==boy)
					break;
				else if (s[j]!='0')
				{
					cout<<i<<" "<<j<<endl;
					s[i]='0';
					s[j]='0';
					f(s);
				}
			}
		}
	}
}

int main()
{
	char s[101];
	cin>>s;
	boy=s[0];
	f(s);
	return 0;
}
