
int main()
{
	int money;
	int smart[1000];
	int stupid[1000];
	int *p;
	int	*q;
	int n,i,j,e;
	int profit;
	p=smart;
	q=stupid;
	for(;;){
		profit=-100000;
		
		scanf("%d",&n);
		if(n==0){
			break;
		}
		else{
			for(i=0;i<n;i++){
				scanf("%d",p+i);
			}
			for(i=0;i<n;i++){
				scanf("%d",q+i);
			}
			for(i=n-1;i>=0;i--){
				for(j=0;j<i;j++){
					if(*(p+j)<*(p+j+1)){
						e=*(p+j);
						*(p+j)=*(p+j+1);
						*(p+j+1)=e;
					}
				}
			}
			for(i=n-1;i>=0;i--){
				for(j=0;j<i;j++){
					if(*(q+j)<*(q+j+1)){
						e=*(q+j);
						*(q+j)=*(q+j+1);
						*(q+j+1)=e;
					}
				}
			}
			for(i=0;i<n;i++){
				for(j=i;j<n;j++){
					if(*(p+j-i)>*(q+j))
						money=money+200;
					else if(*(p+j-i)<*(q+j))
						money=money-200;
				}
				for(j=i-1;j>=0;j--){
					if(*(p+n-1-j)>*(q+j))
						money=money+200;
					else if(*(p+n-1-j)<*(q+j))
						money=money-200;
				}
				if(money>profit){
					profit=money;
				}
				money=0;
			}
			printf("%d\n",profit);
		}
		
	}
	return 0;
}
