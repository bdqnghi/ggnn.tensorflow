void main()
{
	int exin(int n,int m);int king;
	int a[20]={0};  
    int b[20]={0};   
   
    int i,j,l;

    for(i=0;;i++)
    {
	  scanf("%d%d",&a[i],&b[i]);
	  if(a[i]==0)
	  {
		j=i;
		break;
	  }
   }
	l=j;
	for(i=0;i<l;i++)
	{
		king=exin(a[i],b[i]);
		printf("%d\n",king);
	}
}


int exin(int n,int m)
{
	int i,k=0,a=0,*p,num[300];
	p=num;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	while(a<n-1)
	{
		if(*(p+i)!=0) k++;
		if(k==m)
		{
			*(p+i)=0;
			k=0;
			a++;
		}
		i++;
		if(i==n) i=0;
	}
	while(*p==0) p++;
	return(*p);
}