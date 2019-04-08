int main()
{
	int n;
	char a[1000],b[1000];
	int i, j, k, e=0;
	scanf("%d", &n);
	for(i=1;i<n+1;i++)
	{
		scanf("%s", &a);
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]!='(' && a[j]!=')')
			{
				b[j]=' ';
			}
			else
			{
				b[j]=a[j];
			}
		}
	//??????????????
		for(j=0;j<strlen(a);j++)
		{
			if(b[j]=='(')
			{
				for(k=j+1;k<strlen(a);k++)
				{
					if(b[k]=='(')
					{
						e++;
					}
					else if(b[k]==')' && e==0 )
					{
						b[k]=' ';
						b[j]=' ';
						e++;
					}
				}
				e=0;
			}
	//?????????????????????
			else if(b[j]==')')
			{
				e=0;
				k=j-1;
				for(k=j-1;k>0;k--)
				{
					if(b[k]=='(')
					{
						b[k]=' ';
						b[j]=' ';
						k=0;
						e=1;
					}
				}
				if(e==0 && b[0]=='(')
					{
						b[0]=' ';
						b[j]=' ';
					}
			}
		}
	//????????????????????????
		for(j=0;j<strlen(a);j++)
		{
			if(b[j]=='(')
			{
				b[j]='$';
			}
			else if(b[j]==')')
			{
				b[j]='?';
			}
		}
	//???????????????$??
		for(j=0;j<strlen(a);j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
		for(j=0;j<strlen(a);j++)
		{
			printf("%c", b[j]);
		}
		printf("\n");
	}
	return 0;
}
