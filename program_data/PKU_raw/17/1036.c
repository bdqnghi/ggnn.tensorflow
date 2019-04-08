int main()
{
	int i,n,j;
	char a[100][101],b[100][101],*k,*l;
	for(i=0;i<100;i++)
	{
		gets(a[i]);
		if(*(*(a+i))=='\0')
			break;
		for(j=0;*(*(a+i)+j)!='\0';j++)
		{
			if((*(*(a+i)+j)>='a'&&*(*(a+i)+j)<='z')||(*(*(a+i)+j)>='A'&&*(*(a+i)+j)<='Z'))
				b[i][j]=' ';
			else if(*(*(a+i)+j)=='(')
				b[i][j]='$';
			else if(*(*(a+i)+j)==')')
				b[i][j]='?';
		}
		b[i][j]='\0';
		for(k=b[i];*k!='\0';k++)
		{
			if(*k=='?')
			{
				for(l=k-1;l>=b[i];l--)
				{
					if(*l=='$')
					{
						*l=' ';
						*k=' ';
						break;
					}
				}
			}
		}
	}
	n=i;
	for(i=0;i<n;i++)
	{
		puts(a[i]);
		puts(b[i]);
	}
	return 0;
}