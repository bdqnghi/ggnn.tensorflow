void main()
{
	int baoshu(int,int);
	int i,x;        
	int n[50]={0},m[50]={0},w[50]={0};
	for(i=0;;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if((n[i]==0)&&(m[i]==0))
			break;
	}
	x=i;
	for(i=0;i<x;i++)
	{
		w[i]=baoshu(n[i],m[i]);
	}
	for(i=0;i<x;i++)
		printf("%d\n",w[i]);
}
int baoshu(int n,int m)
{
	int i,k,r;                       //k:???????,r:???????
	int num[300]={0},*p;
	p=num;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	r=0;
	while(r<n-1)
	{
		if(*(p+i)!=0)
			k++;
		if(k==m)
		{
			*(p+i)=0;
			k=0;
			r++;
		}
		i++;
		if(i==n)
			i=0;
	}
	while(*p==0)
		p++;
	return(*p);
}