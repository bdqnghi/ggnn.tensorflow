
int func(int a,int b)
{
	int i,flag=1;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
			flag=0;
			break;
		}
	}
	for(i=2;i<=sqrt(b);i++){
		if(b%i==0){
			flag=0;
	     	break;
		}
	}
	return flag;
}

int main()
{
	int sum=0,n,i;
	scanf("%d",&n);
	for(i=1;i<=n-2;){
		if(i==1){
			i=i+2;
			continue;
		}
		if(func(i,i+2)==1){
			sum++;
			printf("%d %d\n",i,i+2);
		}
		i=i+2;
	}
	if(sum==0)
		printf("empty\n");
	return 0;
}
