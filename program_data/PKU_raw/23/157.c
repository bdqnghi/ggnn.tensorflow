main()
{
	char a[101];
	int i,j,len,begin,end;
	gets(a);
	len=strlen(a);
	end=len-1;
	for(i=end;i>=0;--i)
	{
		if(a[i]==' '&&i!=0)
		{
			begin=i+1;
			break;
		}
		 begin=0;
	}
	for(j=begin;j<=end;++j)
		printf("%c",a[j]);
	while(begin!=0)
	{
		end=begin-2;
		for(i=end;i>=0;--i)
		{
			if(a[i]==' '&&i!=0)
			{
				begin=i+1;
				break;
			}
			begin=0;
		}
		printf(" ");
		for(j=begin;j<=end;++j)
			printf("%c",a[j]);
	}
}


