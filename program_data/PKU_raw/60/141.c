void main()
{
	int number,i,n,p,x,m=0;
	scanf("%d",&number);
	n=2;
	for(n=1;n<=number;n++)
{
    i=2;//?????i???2
	do
	{
     p=n%i;
     if(p!=0)i=i+1;
     else break;
	}
    while(i<=n-1);
	if(i==x+2){printf("%d %d\n",x,n);m=1;}
    if(i==n) 
	{
		x=n;
	}
}
	if(m==0)printf("empty");

}