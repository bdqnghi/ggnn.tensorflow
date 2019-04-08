
int main()
{
	int n, k, i, j, num[1000];
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(num[i] + num[j] == k){
				n = 0;
				break;
			}
		}
		if(n == 0){
			printf("yes\n");
			break;
		}
	}
	if(n != 0){
		printf("no\n");
	}
	return 0;
}
