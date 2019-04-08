int main()
{
	int n,i;
	scanf("%d",&n);
	char a[1000],b[1000];
	int j,l,r;
	for(i=0;i<n;i++)
	{
		
		memset(a,'\n',200);
		memset(b,'\n',200);
		scanf("%s",a);
		printf("%s\n",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(a[j]=='(')
			{
				b[j]='$';
			}
			else if(a[j]==')')
			{
			    b[j]='?';
				for(r=j-1;r>=0;r--)
				{
					if(b[r]=='$')
					{
						b[r]=' ';
						b[j]=' ';
						break;
					}
				}
			}
			else if(a[j]!='(' && a[j]!=')')
			{
				b[j]=' ';
			}
		}
		printf("%s\n",b);
	}
	return 0;
}

				


