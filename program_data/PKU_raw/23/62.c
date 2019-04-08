void main()
{
	char str[512];
	int n=0,i,j,k,m;
	gets(str);
	for(i=0;str[i]!='\0';i++)
		n++;
	j=n-1;
    for(i=n-1;i>=0;i--)
	{
		if(str[i]!=' '&&str[i-1]==' '||i==0)
		{
			k=i;
			for(m=k;m<=j;m++)
			printf("%c",str[m]);
			if(k!=0) printf(" ");
			if(i!=0) j=i-2;
		}
	}
}
