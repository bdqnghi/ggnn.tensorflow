void main()
{
	char str[1000],a[200][20];
	int b,c,d,e,f,g,h,i,j,k=0,l,m,n,lda=0,lxiao=50,ld,lx;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==',' || str[i]==' ') str[i]='\0';
	}
	for(i=0;i<=l;i++)
	{
		if(str[i]=='\0') i++;
		for(j=i;;j++)
		{
			a[k][j-i]=str[j];
			if(str[j]=='\0') break;
		}
		k++;
		i=j;
	}
	for(i=0;i<k;i++)
	{	if(strlen(a[i])>lda) {ld=i;lda=strlen(a[i]);}
	    if(strlen(a[i])<lxiao) {lx=i;lxiao=strlen(a[i]);}
	}
	puts(a[ld]);
	puts(a[lx]);
}