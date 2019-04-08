int main()
{
    char s[300][20],c;
    int a[300],n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%s",&s[i]);
    	a[i]=1+strlen(s[i]);
    }
    x=0;
    for(i=1;i<n;i++)
    {
    	x=x+a[i];
    	if(x<=81&&x+a[i+1]<=81) printf("%s ",s[i]);
    	if(x<=81&&x+a[i+1]>81) printf("%s",s[i]);
    	if(x>81) {printf("\n");printf("%s ",s[i]);x=a[i];}
    }
    x=x+a[n];
    if(x<=81) printf("%s",s[n]);
    if(x>81) printf("\n%s",s[n]);
    return 0;
}