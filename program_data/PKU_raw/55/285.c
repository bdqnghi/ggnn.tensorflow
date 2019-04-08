/* Note:Your choice is C IDE */
main()
{
    int f(int a,int b);
    int a,b,i,n,sum=0;
    char s[999];
    scanf("%d %s %d",&a,s,&b);
    n=strlen(s);
    for(i=0;i<n;i++)
    {if(s[i]>=97&&s[i]<=122)
    s[i]-=87;
    else if(s[i]>=65&&s[i]<=90)
    s[i]-=55;
    if(s[i]>=48&&s[i]<=57)
    s[i]-=48;}
    for(i=0;i<n;i++)
    sum+=s[i]*f(a,n-i-1);
    for(i=0;;i++)
    {
    	s[i]=sum%b;
    	sum=(sum-s[i])/b;
    	if(s[i]>9)
    	s[i]+=55;
    	if(sum==0)
    	break;
    }
    for(i=i;i>=0;i--)
    {
    	if(s[i]>9)
    	printf("%c",s[i]);
    	else printf("%d",s[i]);
    }
}
int f(int a,int b)
{
	int i,n=1;
	for(i=0;i<b;i++)
	n*=a;
	return n;
}