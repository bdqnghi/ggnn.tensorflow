int p(int a);
int t(int a,int i);
int huiwen(int a);
int sushu(int a);
int p(int a)
{
	int i=1;
	while(a>0)
	{
		i*=10;
		a--;
	}
	return i;
}

int t(int a,int i)
{
	int n=log10(a);
	return (a%p(i))/p(i-1);
}
int huiwen(int a)
{
	int n=log10(a);//n+1??
	int i;
	for(i=1;i<=(n+1)/2+1;i++)
	{
		if(t(a,i)!=t(a,n+2-i))
			return 0; 
	}
	return 1;
}


int sushu(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return 0;
	}
	return 1;
}


void main()
{
	int max,min;
	int i,index=0;
	int tempa=p(2);
	int tempb=t(12345,4);
	int temp=huiwen(101);
	int out[100];
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		if(sushu(i)&&huiwen(i)){
			out[index]=i;
			index++;
		}
	}
	if(index==0)printf("no");
	else{
		for(i=0;i<index;i++){
			if(i!=index-1)printf("%d,",out[i]);
			else printf("%d",out[i]);
		}
	}
}

