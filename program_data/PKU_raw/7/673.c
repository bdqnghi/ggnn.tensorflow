int main ()
{
	int i,n,k,j,r=0,m=0;
	int lens,lena;
	char s[256],a[100],b[100],c[100],d[100];
	scanf("%s%s%s",s,a,b);
	lens=strlen(s);
	lena=strlen(a);
	for(i=0;i<lens;i++)
	{
		m=0;
		for(k=i;k<i+lena;k++)
		{
			if(a[k-i]!=s[k])  m=1;
		}
		if(m==0)
		{
			for(n=0;n<i;n++)
			 c[n]=s[n];
			c[n]='\0';
			for(j=i+lena;j<lens;j++)
			 d[j-i-lena]=s[j];
			 d[j-i-lena]='\0';
			 r=1;
			 printf("%s%s%s",c,b,d);
			 break;
		}
		
	}
	if(r==0) printf("%s",s);
	
	return 0;
}
