int main()
{
	char c;
	int a[300],i,t,m=0,n=0;
	scanf("%d",&a[0]);
	for(i=1;;i++)
		{c=getchar();
	     if(c==',')scanf("%d",&a[i]);
		 else break;}
	t=i;
	for(i=0;i<t;i++)
	    if(a[i]>m)
			m=a[i];
	for(i=0;i<t;i++)
	    if(a[i]>n&&a[i]<m)
			n=a[i];
	if(n)printf("%d",n);
	else printf("No");
}