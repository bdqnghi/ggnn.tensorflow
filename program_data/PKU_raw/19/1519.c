void main()
{
	char s[1000],a[1000],b[1000];
	int ns,na,nb,i,j,k=0,m,flag,p[100];
	
    gets(s);
	gets(a);
    gets(b);
    ns=strlen(s);
	na=strlen(a);
	nb=strlen(b);
	
	for(i=0,j=0,k=0;i<na,j<ns;j++)
	{
		if(s[j]==a[i])
		{
			flag=j;
			i++;
			if(i==na && (s[j-na]<'A'||s[j+1]>'z'))
			{
				p[k]=flag;
				k++;
				i=0;
			}
		}
		else i=0;
	}
	
	if(k!=0)
	{
		for(m=0;m<k;m++)
		{
			p[m]=p[m]+m*abs(na-nb);
			ns=ns+m*abs(na-nb);
			if(na==nb)
			{
				for(i=0;i<na;i++)
					s[p[m]-na+1+i]=b[i];
				if(m==k-1)
    				printf("%s\n",s);
			}
			if(na>nb)
			{
				for(i=0;i<nb;i++)
					s[p[m]-na+1+i]=b[i];
				for(i=p[m]+1-na+nb;i<ns-na+nb;i++)
					s[i]=s[i+na-nb];
				if(m==k-1)
				{
					for(i=0;i<ns-na+nb;i++)
						printf("%c",s[i]);
					printf("\n");
				}
			}
			if(na<nb)
			{
				for(i=ns-1;i>p[m];i--)
					s[i+nb-na]=s[i];
				for(i=0;i<nb;i++)
					s[p[m]-na+1+i]=b[i];
				if(m==k-1)
				{
					for(i=0;i<ns+nb-na;i++)
						printf("%c",s[i]);
					printf("\n");
				}
			}
		}
	}
	
	else if(k==0) printf("%s\n",s);
}