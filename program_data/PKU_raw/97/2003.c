void main()
{
    int a[7]={0,100,50,20,10,5,1},n,i,b[7];
    scanf("%d",&n);
    for(i=1;i<=6;i++)
    {
    	b[i]=(n-(n%a[i]))/a[i];
    	n=n-a[i]*b[i];
    }
    for(i=1;i<=6;i++)
    {
    	printf("%d\n",b[i]);
    }
}