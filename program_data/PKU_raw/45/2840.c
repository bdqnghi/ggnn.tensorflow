int main()
{
	char s[101];
	int l,i,k,j,m=0,d,n;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			n=k=i;
			break;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=k+1;j<l;j++)
		{
			d=k+1;
			if(s[i]==s[j])
			{
				k=j;
				m=m+1;
				break;
			}
			else 
			{
				m=0;
				d=d+1;
			}
		}
		if(m==n)
		{
			printf("%d",d-2*n);
			break;
		}
	}
	return 0;
}
