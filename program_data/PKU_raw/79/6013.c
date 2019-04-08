
int main(){

	int n, m, id[N], num_monkey;

	int i;
	
	while(1){
		scanf("%d %d", &n, &m);

		if(n != 0 && m != 0){

			for(i = 0; i < n; i++){
				id[i] = i+1;
			}

			num_monkey = n;
			int index = 0;
			int count = 1;
			while(true){
				while(num_monkey > 1){
					if(id[index] != 0){
						if(count != m){
							count++;
							index = (index+1)%n;	
						}else{
							id[index] = 0;
							count = 1;
							num_monkey--;
						}
					}else{
						index = (index+1)%n;	
					}
				}

				for(i = 0; i < n; i++){
					if(id[i] != 0){
						printf("%d\n", id[i]);
						break;
					}
				}

				break;
			}
		}else{
			break;
		}
	}

	return 0;
}