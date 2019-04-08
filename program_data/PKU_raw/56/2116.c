int main()
{
	int num,n[6],sum;
	scanf("%d",&num);
	n[5]=num/10000;
	n[4]=num/1000-10*n[5];
	n[3]=num/100-100*n[5]-10*n[4];

	n[2]=num/10-1000*n[5]-100*n[4]-10*n[3];
	n[1]=num%10;
	sum=10000*n[1]+1000*n[2]+100*n[3]+10*n[4]+n[5];

	while(sum%10==0)
	{
		sum=sum/10;
	}
	printf("%d",sum);
}
