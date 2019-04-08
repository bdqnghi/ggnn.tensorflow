int main(){
	int n,sum,a,b;
	scanf("%d",&n);
	int i=1;
	sum=0;
		while(i<=n){
		a=i/10;
		b=i%10;
			if(i%7==0||a==7||b==7){
				sum=sum;
			}else{
				sum+=i*i;
                           }
			
			i++;
		}
		printf("%d\n",sum);

	return 0;
}