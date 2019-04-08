
int judge(char a[50],char b[50])
{
	int len,lena,lenb,i,j,na,nb,pp=1;
	char ma;
	lena=strlen(a);
//	printf("lena=%d",lena);
	lenb=strlen(b);
//	printf("lenb=%d",lenb);
	if(lena!=lenb) return 0;
	else
	{
		len=lena;
		for(i=0;i<len;i++)
			if(a[i]>=97&&a[i]<=122)
			{
				ma=a[i];
				na=1;
				nb=0;
				for(j=i+1;j<len;j++)
					if(a[j]==ma) 
					{
						na++;
						a[j]=0;
					}
				for(j=0;j<len;j++)
					if(b[j]==ma) nb++;
				if(na!=nb)
				{
					return 0;
					pp=0;
					break;
				}
			}
		if(pp==1)
			return 1;
	}
	return 1;
}

main()
{
	char inp[200],a[50],b[50];
	int len,i,j,ma=0;

	gets(inp);
	len=strlen(inp);

	for(i=0;i<50;i++)
	{
		a[i]=0;
		b[i]=0;
	}

	for(i=0,j=0;i<len;i++)
	{
		if(ma==0)
		{
			if(inp[i]!=32)
				a[i]=inp[i];
			else 
			{
				ma=1;
			
				continue;
			}
		}
		if(ma==1)
		{
			if(inp[i]!=32)
			{
				b[j]=inp[i];
				j++;
			}
		
		}
	}

	if(judge(a,b)==0) printf("NO\n");
	else printf("YES\n");


}
