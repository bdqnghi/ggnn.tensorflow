int main()
{
	int n, cs[999], num[99], result = 60;
	int i, j;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &cs[i]);
		for(j = 0; j < cs[i]; j++){
			scanf("%d", &num[j]);
			if(num[j] < (result - 3)){
				result -= 3;
			}
else if(num[j] >= (result - 3) && num[j] < result){
				result = num[j];
			}
		}
		cs[i] = result;
		result = 60;
	}
	for(i = 0; i < n; i++){
		printf("%d\n", cs[i]);
	}
	return 0;
}

