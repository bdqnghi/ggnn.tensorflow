
int main(int argc, char* argv[])
{
	int n,i,sum;
	sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if (i%7!=0&&(int)i%10!=7&&(int)i/10!=7){
			sum+=i*i;
		}
	printf("%d",sum);
	return 0;
}