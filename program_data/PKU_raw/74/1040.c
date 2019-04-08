
int sushu(int x)
{
     int i;
	 for(i=2;i<=sqrt(x);i++)
		 if(x%i==0)break;
	 if(i>sqrt(x))
		 return(1);
	 else
		 return(0);
}

int huiwen(int x)
{
	int n,i;
	if(x<10)return(1);
	else
		if(x<100&&(x%10)==(x/10))return(1);
		else
			if(x<1000&&(x%10)==(x/100))return(1);
			else
				if(x<10000&&(x%10)==(x/1000)&&(x%100/10)==(x/100%10))return(1);
				else
					if(x<100000&&(x%10)==(x/10000)&&(x%100/10)==(x/1000%10))return(1);
        else return(0);
}

	
void main()
{
	int m,n,i,k=0,o;
    scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(huiwen(i)&&sushu(i))
		{	printf("%d",i);o=i;k++;break;
		}
    for(i=o+1;i<=n;i++)
		if(huiwen(i)&&sushu(i))
		{	printf(",%d",i);
		      k++;
		}
	if(k==0)
		printf("no");
}