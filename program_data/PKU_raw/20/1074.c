int main()
{
	char str[11],substr[4],c[14];
	int i=0,j=0,a,m,n,p,q;
	for (;;)
	{a=scanf("%s %s",str,substr);
	 if (a==EOF)
		{break;}
	 else
	 {m=strlen(str);
	 n=strlen(substr);
	 p=0;
	 for (i=0;i<m;i++)
		{if (str[i]<=str[p])
			{continue;}
		 else {p=i;}
		}
     for (q=0;q<m+n;q++)
		{if (q<=p)
			{c[q]=str[q];}
		 if (q>p && q<p+n+1)
			{c[q]=substr[q-p-1];}
		 if (q>=p+n+1)
			{c[q]=str[q-n];}
		}
	 for (q=0;q<m+n;q++)
		{printf("%c",c[q]);
		}
	 printf("\n");}
	}
	return 0;
}