int main()
{
	char a[1000],b[1000];
	char sold[1000],snew[1000];
	int i,j,k,l;
	gets(a);
	gets(sold);
	gets(snew);
	for(i=0;i<strlen(a);i++)
	{
		k=0;
		for(j=i;j<i+strlen(sold);j++)
		{
			if(i==strlen(a)-strlen(sold))
				if(a[i-1]!=' ') break;
			if(i!=0&&i!=strlen(a)-strlen(sold))
				if(a[i+strlen(sold)]!=' '||a[i-1]!=' ') break;
			if(a[j]!=sold[k++]) break;
		}
		if(j==i+strlen(sold))
		{
			for(k=0;k<500;k++)
				b[k+i+strlen(snew)]=a[k+i+strlen(sold)];
			for(k=0;k<i;k++)
				b[k]=a[k];
			l=0;
			for(k=0;k<strlen(snew);k++)
				b[i+k]=snew[l++];
			for(k=0;k<1000;k++)
				a[k]=b[k];
			i=i+strlen(snew)-1;
		}
	}
	puts(a);
	return 0;
}