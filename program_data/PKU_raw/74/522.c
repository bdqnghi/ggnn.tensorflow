void main()
{
	int ce(int o);
	int hui(int a);
	int m,n,i,j=0,t[10];
	scanf("%d %d",&m,&n);
		for(i=m;i<=n;i++)
			if(ce(i)==1&&hui(i)==1)
			{t[j]=i;
			j++;
			}
	if(j==0)
		printf("no");
	else{

	for(i=0;i<j-1;i++)
		printf("%d,",t[i]);
	printf("%d",t[j-1]);
	}
}
int ce(int o)
{
	int k,t;
	k=sqrt(o);
	for(t=2;t<=k;t++)
		if(o%t==0)break;

	if(t>k)return(1);
	else return(0);
}
int hui(int a)
{
	int k=0,b[10],place,flag=1,i;
	if(a<=999)
		place=3;
	else if(a<=9999)
	    place=4;
	else if(a<=99999)
		place=5;
	else if(a<=999999)
		place=6;
	k=0;

	for(i=0;i<place;i++)
	{
		b[k]=a%10;
		a=(a-b[k])/10;
		k++;
	}
	for(i=0;i<k/2;i++)
		if(b[i]!=b[k-1-i])
		{
			flag=0;
			break;
		}
	if(flag==1)
		return(1);
	else return(0);
}



