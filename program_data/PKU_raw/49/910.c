int check(char c[])
{
	int len,i;
	char d[1000];
	len=strlen(c);
	for(i=0;i<len;i++)
		*(d+i)=*(c+len-i-1);
	*(d+len)='\0';
	if(strcmp(c,d)==0)
		return 1;
	else
		return 0;
}


int main()
{
	char a[1000];
	char b[1000];
	int i,j,k,len,m;
	scanf("%s",a);
	len=strlen(a);
		for(i=2;i<=len;i++)
		{
			for(j=0;j<=len-i;j++)
			{
				for(m=0;m<i;m++)
					*(b+m)=*(a+j+m);
				b[i]='\0';
				if(check(b))
					printf("%s\n",b);
			}
		}
		return 0;
}