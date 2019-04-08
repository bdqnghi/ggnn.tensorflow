void main()
{
    char a[101];
    char b[101];
    char *p1,*p2,*p;
    int n;
    p=a;
    gets(p);
    n=strlen(a);
    for(p2=b,p1=a;p1<p+n-1;p1++,p2++)
    {
    	*p2=*p1+*(p1+1);
    }
    *p2=*p1+*p;
    p2++;
    *p2=0;
    p2=b;
    printf("%s",p2);
}