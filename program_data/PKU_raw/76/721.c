int main()
{
	int i, j, n, max = 0, min = 1000;
	int sz[10000] = { 0 };
	struct  qujian{
		int x, y;
	} a[50000];
	scanf("%d\n", &n);
	for (i = 0; i < n; i++){
		scanf("%d %d\n", &a[i].x, &a[i].y);
	}
	for (i = 0; i<n; i++){
		if (min>a[i].x){
			min = a[i].x;
		}
		if (max<a[i].y){
			max = a[i].y;
		}
	}
          sz[min]=1;
     for (i = min + 1; i<=max;i++){
		for (j = 0; j < n; j++)
                             {
			if ((i - 0.5) >= a[j].x&&i <= a[j].y){
				sz[i] = 1;
			}			
                              }
	}
	for (i = min; i <= max; i++){
		if (sz[i] == 0){
			printf("no");
			break;
		}
		else if (i == max){

				printf("%d %d", min, max);
		 }
                  }

	
	return 0;
}














