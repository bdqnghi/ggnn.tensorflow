
int main()
{
	int n, qimo[100], banyi[100], lunwen[100];
	char name[100][20], xuegan[100], xibu[100];
	int sum[100], a, b = 0, i, result = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		sum[i] = 0;
		scanf("%s %d %d %c %c %d", name[i], &qimo[i], &banyi[i], &xuegan[i], &xibu[i], &lunwen[i]);
	}
	for(i = 0; i < n; i++){
		if((qimo[i] > 80)&&(lunwen[i] != 0)){
			sum[i] += 8000;
		}
		if((qimo[i] > 85)&&(banyi[i] > 80)){
			sum[i] += 4000;
		}
		if(qimo[i] > 90){
			sum[i] += 2000;
		}
		if((qimo[i] > 85)&&(xibu[i] == 'Y')){
			sum[i] += 1000;
		}
		if((banyi[i] > 80)&&(xuegan[i] == 'Y')){
			sum[i] += 850;
		}
	}
	for(i = 0; i < n; i++){
		result += sum[i];
		if(sum[i] > b){
			b = sum[i];
			a = i;
		}
	}
	printf("%s\n%d\n%d\n", name[a], b, result);
	return 0;
}