int sushu(int k)
{
	int o;
	for(o=2;o<=sqrt(k);o++) if(k%o==0) {o=0;break;}
	if(o!=0) o=1;
	return(o);
}
int huiwen(int k)
{
	int k2=0,o,x;
	x=k;
	while(x>=10)
	{
		o=x%10;
		k2=10*k2+o;
		x=x/10;
	}
	k2=10*k2+x;
	if(k==k2) o=1;
	else o=0;
	return(o);
}

void main()
{
	int sushu(int k);
	int huiwen(int k);
	int m,n,i,f=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i))
			if(huiwen(i))
			{
				if(f==0) {printf("%d",i);f=1;}
				else printf(",%d",i);
			}
	}
	if(f==0) printf("no");
	printf("\n");
}