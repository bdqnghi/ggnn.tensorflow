int a[10000];
int main()
{
	int m=-999,n=-999,t;
    char c;
    do{
		scanf("%d",&t);
        if(t>m)n=m,m=t;
        else if(t<m&&t>n)n=t;
        c=getchar();
	}while(c>=32);
    if(n==-999)
	printf("No\n");
	else printf("%d\n",n);
	return 0;
}
