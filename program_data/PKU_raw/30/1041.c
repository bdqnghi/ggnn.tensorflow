int main()
{
    int n,i,m;
	m=0;
    scanf("%d",&n);
    for(i=n;i>0;i--)
{
    if(i/10!=7)
		if(i-(i/10)*10!=7)
			if(i%7!=0)
               m=m+i*i;
}
    printf("%d",m);
    return 0;
}
	