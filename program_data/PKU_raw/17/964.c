char a[101],b[101];
int l,c[101];
int main()
{
	int i,j;
	while(cin.getline(a,101))
	{
		j=0;
		memset(c,0,sizeof(c));
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='(')
			{
				b[i]='$';c[j]=i;
				j=j+1;
			}
			else if(a[i]==')')
			{
				if(j>=1)
				{
					b[c[j-1]]=' ';b[i]=' ';
					j=j-1;
				}
				else
				{
					b[i]='?';
				}
			}
			else
			{
				b[i]=' ';
			}
		}
		b[l]='\0';
		cout<<a<<endl;
		cout<<b<<endl;
	}
	return 0;
}
