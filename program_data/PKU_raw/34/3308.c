int main()
{
	void jiaogu(int n);
	int n,*a,k,j,i,max,t,s;
	scanf("%d",&n);
	jiaogu(n);
}
void jiaogu(int n)
{
	int i;
	if (n==1) printf("End");
	else if(n%2==0)  {i=n/2;printf("%d/2=%d\n",n,i);jiaogu(i);}
	else  {i=n*3+1;printf("%d*3+1=%d\n",n,i);jiaogu(i);}
}