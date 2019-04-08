int main()
{
    int n,k=1,i,m;
    scanf("%d\n",&n);

    char str[81];
    while(k<=n)
    {
		gets(str);
		m=strlen(str);
		if((str[0]!='_') && 
			( (str[0]<'A') || (str[0]>'Z'&&str[0]<'a') || (str[0]>'z') )
			)
			printf("0\n");
		else 
		{
			if(m==1) 
				printf("1\n");
			else
			{
				i=1;
				while(i<=m)
				{
					if((str[i]!='_')&&(str[i]<'A'||(str[i]>'Z'&&str[i]<'a')||str[i]>'z')&&((str[i]<'0')||(str[i]>'9')))
					{
						printf("0\n");break;
					}
					else if(i==m-1) 
					{
						printf("1\n");break;
					}
					i=i+1;
				}
			}
		}
        k=k+1;
    }
    return 0;
}
