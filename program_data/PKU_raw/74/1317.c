int main()
{
	int rev(int x);
	int prime(int y);
	int m,n,i,j=0,k,a[100];
	scanf("%d %d",&m,&n);
	i=m;
	while(i<=n)
	{
		if(rev(i)==1&&prime(i)==1) 
		{
			a[j]=i;
			j++;
		}
		i++;
	}
	if(j==0) printf("no");
	else
	{
	    printf("%d",a[0]);
	    for(k=1;k<j;k++) printf(",%d",a[k]);
	}
	return 0;
}

int rev(int x)
{
	int a=0,b,temp;
	temp=x;
	while(x>0)
	{
		b=x%10;
		a=a*10+b;
		x=x/10;
	}
	if(temp==a) return 1;
	else return 0;
}

int prime(int y)
{
	int c;
	for(c=2;c<=y/2;c++)
	{
		if(y%c==0) break;
	}
	if(c<=y/2) return 0;
	else return 1;
}


    