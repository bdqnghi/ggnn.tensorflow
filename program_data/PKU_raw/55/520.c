
int main()
{
	int a, b, n1[300]={0}, i=0, j=0, k=0, number, n3[300]={0};
	long n2=0;
	char n[300]={0}, n_[300]={0};
	scanf("%d%s%d", &a, n, &b);
//	printf("%d %s %d", a, n, b);
	number=strlen(n);
//	printf("%d", number);
	for(i=0;i<number;i++)
	{
		if(n[i]>=48 && n[i]<=57)
			n1[i]=n[i]-48;
		else if(n[i]>=65 &&n[i]<=90)
			n1[i]=n[i]-55;
		else if(n[i]>=97 && n[i]<=122)
			n1[i]=n[i]-87;
		n2=n2+n1[i]*pow(a, number-i-1);
	}
	if(n2==0)
		printf("0");
	if(b==10)
		printf("%d", n2);
	else
	{
		while(n2>0)
		{
			n3[j]=n2%b;
			n2=n2/b;
			j++;
		}
		for(k=0;k<j;k++)
		{
			if(n3[j-k-1]>=0 && n3[j-k-1]<=9)
				n_[k]=n3[j-k-1]+48;
			else if(n3[j-k-1]>=10 && n3[j-k]<= 35)
				n_[k]=n3[j-k-1]+55;
		}
		printf("%s\n", n_);
	}
	return 0;
}