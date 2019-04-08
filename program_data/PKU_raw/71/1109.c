
int main()
{
	int n, year[200], a[200], b[200], e;
	int i, j, k;
	int x = 1;
	int y = 1;
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d", &n);
	for(i = 0; i< n; i++){
		scanf("%d %d %d", &year[i], &a[i], &b[i]);
	}
	for(i = 0; i < n; i++){
                  x = 1;
		y = 1;
		day[1] = 28;
		if(((year[i] % 4 == 0) && (year[i] % 100 != 0)) || ( year[i] % 400 == 0)){
			day[1] = 29;
		}
		for(j = 1; j < a[i]; j++){
			 x = x + day[j-1];
	    }
		for(k =1; k < b[i]; k++){
			y = y + day[ k-1];
		}	
		e = (x - y) % 7;
		if(e == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}	
	return 0;
}