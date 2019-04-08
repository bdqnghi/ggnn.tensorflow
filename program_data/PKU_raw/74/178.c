
int panduansushu(int x)
{
	int i,k=0;
	for(i=1;i<=x/2;i++)
		if(x%i==0 && i!=1)
			k=k+1;
	if(k==0)
	  return 0;
	else
		return 1;

}

int suanweishu(int x)
{
	int d=0;
	while(x!=0)
	{
			x=x/10;
			d=d+1;
	}
	return d;
}

int panduanfanwen(int x,int y)
{
	if(y==2 && x/10==x%10)
		return 0;
	else
	 if(y==3 && x%10==x/100)
	    return 0;
	else
	  if(y==4 && x%10==x/1000 && (x%100)/10==(x/100)%10)
	     return 0;
	else
	  if(y==5 && x%10==x/10000 && (x%100)/10==(x/1000)%10)
		 return 0;
	else
		return 1;
}



int main()
{
	int m,n,i,a,t,b[100]={0},z=0;
	int panduansushu(int x);
	int suanweishu(int x);
	int panduanfanwen(int x,int y);
	scanf("%d%d",&m,&n);
	for(i=0;m+i<=n;i++)
	{
		a=m+i;
		if(panduansushu(a)==0)
		{
			t=suanweishu(a);
			if(panduanfanwen(a,t)==0)
			{
			  b[z]=a;
			  z=z+1;
			  
			}
		}
	}
	if(b[0]!=0)
	{
	  for(i=0;i<z-1;i++)
		 printf("%d,",b[i]);
	 printf("%d",b[i]);
	}
	if(b[0]==0)
		printf("no");
	return 0;
}
