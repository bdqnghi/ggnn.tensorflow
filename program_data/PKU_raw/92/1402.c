
void order(int *p,int n){
	int i,k,e;
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(*(p+i)<*(p+i+1)){
				e=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=e;
			}
		}
	}
}
int main(int argc, char* argv[])
{
	int n,king[1000],minister[1000],i,k,money=0,money_plus=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
			scanf("%d",&minister[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&king[i]);
		}
		order(king,n);
		order(minister,n);
		i=0;
		k=0;
		int m=n;
		while(i<n&&k<m){
			if(king[i]>minister[k]){
				i++;
				m--;
				money-=200;
			}else if(king[i]==minister[k]){
				if(king[n-1]>minister[m-1]){
					i++;
					m--;
					money-=200;
				}else if(king[n-1]<minister[m-1]){
					n--;
					m--;
					money+=200;
				}else{
					if(king[i]==king[n-1]){
						break;
					}else{
						i++;
						m--;
						money-=200;
					}
				}
			}else{
				i++;
				k++;
				money+=200;
			}
		}
		printf("%d\n",money);
                money=0;
	}
	return 0;
}