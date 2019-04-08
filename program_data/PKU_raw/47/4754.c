void main()
{
	int *p,*hd;int i,n;scanf("%d",&n);
	hd=p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++,p++)
	{scanf("%d",p);}
	for(p=hd+n-1,i=0;i<n;i++,p--)
	{if(i==0) printf("%d",*p);
	else printf(" %d",*p);}

}