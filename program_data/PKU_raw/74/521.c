
void main()
{
    long int l[100]={0},s=0;
    long int i,t,n,p,q,j,a;
	scanf("%d %d",&p,&q);
	for(j=0;j<q-p+1;j++)
	{
	a=p+j;
	n=a;
	t=0;
	for(i=0;i<9;i++)
	{
		if(n!=0)
		{
			t=t*10+n%10;
			n=n/10;
		}
		else
			break;
	}
	n=0;
	if(t==a)
	{
		for(i=2;i<a;i++)
		{
			if(a%i!=0)
				n++;
		}
		if(n==a-2)
		{
		    l[s]=a;
		    s++;
		}
	}
	}
	if(l[s-1]!=0)
	{
	for(i=0;i<s-1;i++)
	    printf("%d,",l[i]);
	printf("%d\n",l[s-1]);
	}
	else
		printf("no\n");
}
