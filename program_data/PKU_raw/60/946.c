int main()
{
	int n,i;
	int x,y,s,t;
	scanf("%d",&n);
	if(n<5){
		printf("empty");
	}else{
		for(x=3;x<=n-2;x++){
			for(i=x-1;i>1;i--){
				if(x%i==0){
					s=0;
					break;
				}else{
					s=1;
				}
			}
			if(s==1){	
				y=x+2;
				for(i=x-1;i>1;i--){
					if(y%i==0){
						t=0;
						break;
					}else{
						t=1;
					}
				}
			}else{
				t=0;
			}
			if(t==1){
				printf("%d %d\n",x,y);
			}
		}
	}
	return 0;
}

