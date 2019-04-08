int main()
{ 
	int i,a,sum=0;
	scanf("%d",&a);
	for(i=a;i>=0;i--){
		if(i%7!=0&&(i-7)%10!=0&&(int)(i/10)!=7)
	sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}
