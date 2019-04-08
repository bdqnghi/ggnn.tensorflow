int main()
{
	char s[10000],s1[10000];
	char *p,*p1;
	int a[10000];
	int i,n;
	gets(s);
    p=s;
	p1=s1;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
      a[i]=*(p+i);
	}
	 for(i=0;i<n-1;i++)
	 {
		*(p1+i)=*(p+i)+a[i+1];
	 }
	 *(p1+n-1)=*(p+n-1)+a[0];
	 for(i=0;i<n;i++)
	 {
	 printf("%c",*(p1+i));
	 }
	 return 0;
}

