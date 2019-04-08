int main() {
	int n,a,i,p,q,result;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);

		if((a==1)||(a==2)){
			printf("1\n");
		}

		else{
			p=1;
			q=1;
			for(i=2;i<a;i++){
				result=p+q;
				p=q;
				q=result;
			}
			printf("%d\n",result);
		}

	}
	return 0; 
}