int pdss(int number);
int main(){
	int i;
	int n,u,v,w;
	int m=0;


	scanf("%d",&n);
	
	for(i=3;i<=n-2;i++){
		u=pdss(i);
		if(u==1){
			v=i+2;
			w=pdss(v);
			if(w==1){
				m=1;

				if(i==3){
					printf("%d %d",i,v);
				}
				else if (i!=3){
						printf("\n%d %d",i,v);
				}
			}
			i=i+1;
		}
		
	}
	if(m==0){
		printf("empty");
	}


		        
	return 0;
}

	int pdss(int a){
		int j;
		int count;
		count=0;
		for(j=2;j<a;j++){
			if(a%j==0){
				count++;
			}
		}
		if (count==0){
			return 1;
		}
		else if(count>0){
			return 0;
		}
	}
