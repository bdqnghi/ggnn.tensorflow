
int main()
{
    long i,j,l,n,ok;
    long legal[300]={0};
    char inf[90];
    legal['_']=1;
    for(i='a';i<='z';i++)
	legal[i]=1;
    for(i='A';i<='Z';i++)
	legal[i]=1;
    for(i='0';i<='9';i++)
	legal[i]=1;
    scanf("%ld",&n);
    gets(inf);
    for(i=1;i<=n;i++){
	gets(inf);
	l=strlen(inf);
	ok=1;
	for(j=0;j<l;j++)
	    ok&=legal[inf[j]];
	if(inf[0]>='0' && inf[0]<='9')
	    ok=0;
	printf("%ld\n",ok);
    }
    return 0;
}
