void main()
{
	char s[200];
	gets(s);
	int len=strlen(s),i,j,temp=len-1;
	for(i=len-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			for(j=i+1;j<=temp;j++)
				putchar(s[j]);
			putchar(s[i]);
			temp=i-1;
		}
		else
			if(i==0)
			{
				for(j=i;j<=temp;j++)
					putchar(s[j]);
			}
		
		
	}
}