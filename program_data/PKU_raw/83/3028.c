float gpoint(int gr){
	if(gr <= 100 && gr >= 90)
		return 4.0;
	else if(gr <= 89 && gr >= 85)
		return 3.7;
	else if(gr <= 84 && gr >= 82)
		return 3.3;
	else if(gr <= 81 && gr >= 78)
		return 3.0;
	else if(gr <= 77 && gr >= 75)
		return 2.7;
	else if(gr <= 74 && gr >= 72)
		return 2.3;
	else if(gr <= 71 && gr >= 68)
		return 2.0;
	else if(gr <= 67 && gr >= 64)
		return 1.5;
	else if(gr <= 63 && gr >= 60)
		return 1.0;
	return 0.0;
}
int main(){
	int n;
	float total_g = 0, total_f = 0;
	int a[11], b[11];
	scanf("%d", &n);
	int i;
	for(i = 1; i <= n; i++){
		scanf("%d", a+i);
		total_f += a[i];
	}
	for(i = 1; i <= n; i++){
		scanf("%d", b+i);
		total_g += gpoint(b[i])*((float)a[i]);
	}
	printf("%.2f\n", total_g/total_f);
	return 0;
}