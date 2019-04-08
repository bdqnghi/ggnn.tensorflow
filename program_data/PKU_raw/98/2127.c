/* Note:Your choice is C IDE */
int main()
{
    int i,n,a[1000],x=0;
    char s[1000][40];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%s",&s[i]);
    	a[i]=1+strlen(s[i]);
    }
    for(i=1;i<n;i++)
    {
    	x=x+a[i];
    	if(x<=81)
    	{
    		if((x+a[i+1])<=81) printf("%s ",s[i]);
    		else printf("%s",s[i]);
    	}
    	else
    	{
    		printf("\n");
    		x=a[i];
    		printf("%s ",s[i]);
    	}
    }
    if((x+a[n])<=81) printf("%s",s[n]);
    else printf("\n%s",s[n]);
    return 0;
}