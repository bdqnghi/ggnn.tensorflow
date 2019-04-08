int main()
{
	int l,m,n,k,i,j,p,q;
	int s[30]={0};
    scanf("%d",&n);
    s[1]=1;s[2]=1;
    for (i=3;i<=25;i++)
    s[i]=s[i-1]+s[i-2];
    for (i=1;i<=n;i++)
    {
        scanf("%d",&p);
        printf("%d\n",s[p]);
        }
 
return 0;
}
