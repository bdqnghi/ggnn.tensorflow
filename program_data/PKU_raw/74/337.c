int FLAG=0,TAG=1;
void main()
{
	int m,n,i;
	void func(int num);
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		func(i);
	if(FLAG==0) printf("no\n");
	
	
}


int back(int num)
{
	int result=0;
	while(num>0)
	{
		result=10*result+num%10;
		num=num/10;
	}
	return result;
}

void func(int num)
{
	int i,flag;
	for(i=2,flag=1;i<num;i++)
		if(num%i==0)
		flag=0;
		if(num!=back(num))
			flag=0;
		if(TAG&&flag) {printf("%d",num);FLAG=1;TAG=0;}
		else if(flag) {printf(",%d",num);FLAG=1;}
}


