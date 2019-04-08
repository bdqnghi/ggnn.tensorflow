int main()
{
	char a[100];
	int i,j,n,word=0;
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=' ')word++;
        if(a[i]==' ')
	    {
			for(j=0;j<word;j++)
				printf("%c",a[i+j+1]);
			word=0;
			if(i!=0)printf(" ");
	    }
		if(i==0)
			for(j=0;j<word;j++)
				printf("%c",a[j]);
	}
}