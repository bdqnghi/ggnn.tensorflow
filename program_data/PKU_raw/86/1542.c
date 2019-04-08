int main (){
	int n,m,sum,t,shen,d;
	int ci[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			printf("60\n");
		}else {
		for(int a=0;a<m;a++){
			scanf("%d",&ci[a]);
		}
		for(int b=0;b<m;b++){
			sum=b+1;
			t=ci[b]+3*sum;
			if(t>63){
				shen=60-3*b;
				printf("%d\n",shen);
				break;
			}else if(b==m-1&&t<=60){
				shen=60-3*sum;
				printf("%d\n",shen);
			}else if(t>60&&t<=63){
				d=t-60;
				shen=60-3*sum+d;
                printf("%d\n",shen);
				break;
			}
		}
	}
	}
	return 0;
}