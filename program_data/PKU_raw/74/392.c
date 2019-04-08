int huiwen(int i,int w)
{
	int k;k=pow(10,w);int m;
    if(w==0)return(1);
	if(w>=1)
	{
	     if(i/k!=i%10)return(0);
	     if(i/k==i%10)
		 {
		     i=(i-k*(i/k))/10;
		     w=w-2;
		     m=huiwen(i,w);
		     return(m);
		 }
	}
}
void main()
{
	int m,n;int i;int w;int k,j;int count=0;int a[100];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		w=log10(i);
		k=huiwen(i,w);
		if(k==1)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)break;
			}if(j==i){a[count]=i;count++;}
		}
		else continue;
	}if(count==0)printf("no");
	if(count>0)
	{
		for(i=0;i<count-1;i++)
		{
			printf("%d,",a[i]);
		}printf("%d",a[count-1]);
	}
}
