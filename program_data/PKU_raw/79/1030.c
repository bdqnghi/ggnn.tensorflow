
int main(int argc, char* argv[])
{
	int n,m;
	int x;
	for(x=0;;x++){
	scanf("%d%d",&n,&m);
	if(n==0&&m==0){
		break;
	}else{
	int sz[300]={0};

	int i;
	int j;
	int begin=0;
	for(i=n;i>1;i--){
		int M;
		M=m%i;
		if(M==0){
			M=i;              //??//
		}else{
			M=m%i;
		}
		int count=0;
		for(j=begin;j<n;j++){
			if(sz[j]==0){
				count++;
			}
		}

		int monkey_count=0;
		if(count>=M){
			for(j=begin;j<n;j++){
				if(sz[j]==0){
					monkey_count++;
				
				if(monkey_count==M){
					begin=j;
					sz[j]=1;
					break;
				}
				}
			}
		}else{
			for(j=begin;j<n;j++){
				if(sz[j]==0){
					monkey_count++;
				}
			}
			for(j=0;j<n;j++){
				if(sz[j]==0){
					monkey_count++;
					if(monkey_count==M){
						begin=j;
						sz[j]=1;
						break;
					}
				}
			}
		}
	}

	for(i=0;i<n;i++){
		if(sz[i]==0){
			printf("%d\n",i+1);
		}
	}
	}
	}
	
	return 0;
}