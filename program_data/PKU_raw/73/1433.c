
int main() {
	int map[6][6];
	int i,j,k;
	int g = 0;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	for(i=0; i<5; i++) {
		k = 0;
		for(j=1; j<5; j++) {
			if(map[i][j] > map[i][k]) {
				k = j;
			}
		}
		for(j=0; j<5; j++) {
			if(j!=i && map[j][k]<map[i][k]) {
				break;
			}
		}
		if(j >= 5) {
			printf("%d %d %d\n", i+1, k+1, map[i][k]);
			g = 1;
		}
	}
	if(g == 0) {
		printf("not found\n");
	}
	return 0;
}