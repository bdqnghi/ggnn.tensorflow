
int main(){
	int N, sz[MAX], odd[MAX];
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &sz[i]);
	}
	int remainder, k = 0;
	for(int j = 0; j < N; j++){
		remainder = sz[j] % 2;
		if(remainder != 0){
			odd[k] = sz[j];
			k++;
		}
	}
//find the odd numbers
	int t;
	for(int p = 1; p < k; p++){
		for(int q = 0; q < k-p; q++){
			if( odd[q] > odd[q+1] ){
				t = odd[q];
				odd[q] = odd[q+1];
				odd[q+1] = t;
			}
		}
	}
//arrange the numbers from small to large
	for(int m = 0; m < k; m++){
		if(m == k-1){
			printf("%d", odd[m]);
		}else{
			printf("%d,", odd[m]);
		}
	}
	return 0;
}
