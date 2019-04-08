int main()
{
	int flag=0;
	int sushu(int);
	int huiwen(int);
	int m,n,i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
		{
		if(flag!=0)printf(",%d",i);
		else {printf("%d",i);flag=1;}	
		}
		
	}
	if(flag==0) printf("no");
	return 0;
	}
int sushu(int n)
{
	if(n==2) return 1;
	int j,k=sqrt(n);
	for(j=2;j<k+1;j++)
	{
		if(n%j==0) break;
	}
	if(j==k+1) return 1;
	else return 0;
}
int huiwen(int n)
{
     int j;
     if(n<10)
       return 1;
       int i=0,a[15];
          while(n)
        {a[i]=n%10;
     i++;
        n/=10;}
         i--;
       for(j=0;j<i;j++,i--)
       if(a[j]!=a[i])
      return 0;
         return 1;
}

