

int main()
{
	int i,j,k,w,nw=0,ns,na,nb,rem[102],flag,FLAG=0;
	char s[102],a[102],b[102];
	int vest[102];
	gets(s);
	gets(a);
	gets(b);
	ns=strlen(s);
	na=strlen(a);
	nb=strlen(b);
	for (i=0;i<ns;i++)
	{

	if (s[i]!=' ' && FLAG==0)
	{
		FLAG=1;
		flag=0;
		for (k=i,j=0;j<na;j++,k++)
		{
			if (s[k]!=a[j])
			{
				flag=1;
				break;
			}
		}
		if (flag==0 && (s[k]==' ' || s[k]=='\0'))
		{
			rem[nw]=i;
			nw++;
		}
	}
	else
	{
		FLAG=0;
	}

	}
	for (w=0;w<nw;w++)	
	{
			if (nb==na)
			{
				for (k=0;k<na;k++)
				{
					s[k+rem[w]]=b[k];
				}
			}
			else if (nb>na)
			{
				ns=ns+nb-na;
				s[ns]='\0';
				for (k=ns-1;k>rem[w];k--)
				{
					s[k]=s[k-nb+na];
				}
				for (k=0;k<nb;k++)
				{
					s[k+rem[w]]=b[k];
				}				
				for (j=0;j<nw;j++)
				{
					rem[j]=rem[j]+nb-na;
				}
			}
			else
			{
				ns=ns+nb-na;
				for (k=rem[w]+1;k<ns;k++)
				{
					s[k]=s[k-nb+na];
				}
				for (k=0;k<nb;k++)
				{
					s[k+rem[w]]=b[k];
				}				
				for (j=0;j<nw;j++)
				{
					rem[j]=rem[j]+nb-na;
				}
			}
	}
	for (i=0;i<ns;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}