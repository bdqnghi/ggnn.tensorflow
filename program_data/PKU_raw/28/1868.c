int main()
{
	int a,b,c,d,len,lena;
	char z[4000];
	gets(z);
    len=strlen(z);
	b=0;
	for(a=0;a<=len-1;a++)
	{
		if((b==0)&&z[a]==' ') continue;
		if(z[a]!=' ') b++;
		if(z[a]==' ')
		{
			printf("%d,",b);
			b=0;
			continue;
		}
		if((z[a]=='.')||(z[a]=='!')||(z[a]=='?')) 
		{
			if (a!=len-1)
			{
			printf("%d,",b);
			}
			else
			{
				printf("%d",b);
				return 0;
			}
			b=0;
		}
		if(a==len-1) printf("%d",b);
	}
	return 0;
}