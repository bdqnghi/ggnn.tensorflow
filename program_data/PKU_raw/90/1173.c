int num(int m,int n);
int num1(int m,int n);
int num2(int m,int n);
int main()
{
	int m,n,k,i;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
    scanf("%d%d",&m,&n);
	printf("%d\n",num(m,n));
	}
return 0;
}


int num(int m,int n)
{return(num1(m,n)+num2(m,n));}
int num1(int m,int n)    //full
{ 
	if(m==n)return(1);
	else if(n==1)return(1);
	else if(m<n)return(0);
	else return(num(m-n,n));
}
int num2(int m,int n)   //empty
{
	if(m==1)return(1);
	if(n==1)return(0);
	else return(num(m,n-1));
}
     
	