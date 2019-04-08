int IsPalindrome(int x)
{
	int i,num=0;
	for(i=0;x>0;i++)
	{
		num=num*10+(x-(x/10)*10);
		x=x/10;
	}
	return(num);
}
int IsPrime(int x)
{
	int k,i;
	k=sqrt(x);
	for(i=2;i<=k;i++)
		if(x%i==0)
			break;
		if(i>=k+1)
			return 1;
		else return 0;
}
void main()
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(i==IsPalindrome(i)&&IsPrime(i)==1)
			break;
	}
	for(j=m,k=0;j<=n;j++)
	{
		if(j==IsPalindrome(j)&&IsPrime(j)==1){
			if(j==i) {
				printf("%d",j);
				k++;
			}
			else {
				printf(",%d",j);
				k++;}
		}
	}
	if(k==0) printf("no");
}



