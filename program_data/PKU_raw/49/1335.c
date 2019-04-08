
int main()
{
    int i,j,k,sign,l;
	char s[550];

	gets(s);
	l=strlen(s);
	for(i=2;i<=l;i++)
	{
	    for(j=0;j<l;j++)
		{
			sign=0;
		    for(k=j;k<j+i;k++)
			{
			    if(s[k]==s[j+i-1-k+j])
					sign++;
			}
			if(sign==i)
			{
				for(k=j;k<j+i;k++)
					printf("%c",s[k]);
				printf("\n");
			}
		}
	}
	return 0;
}