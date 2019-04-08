// #define SKIP_HORSERACING


int cmp(const void* a, const void* b) {
	int *aa = (int*)a, *bb = (int*)b;
	return *bb - *aa;
}

int main() {
	int n, yourspeed[1000], myspeed[1000], match[1000];
	while(1) {
		scanf("%d", &n);
		if(n == 0) break;
		for(int i = 0; i < n; i++) {
			scanf("%d", &myspeed[i]);
		}
		for(int i = 0; i < n; i++) {
			scanf("%d", &yourspeed[i]);
		}

		qsort(myspeed, n, sizeof(int), cmp);
		qsort(yourspeed, n, sizeof(int), cmp);

		int cnt = 0, myfirst = 0, mylast = n-1, yourfirst = 0, yourlast = n-1;
		while(myfirst <= mylast) {
			if(myspeed[myfirst] <= yourspeed[yourfirst] && myspeed[mylast] <= yourspeed[yourlast]) {
				match[mylast--] = yourfirst++;
			}
			else if(myspeed[myfirst] > yourspeed[yourfirst]){
				match[myfirst++] = yourfirst++;
			}
			else {
				match[mylast--] = yourlast--;
			}
		}
		for(int i = 0; i < n; i++) {
			if(myspeed[i] > yourspeed[match[i]]) cnt++;
			else if(myspeed[i] < yourspeed[match[i]]) cnt--;
		}


		int gain = 200 * cnt;
		printf("%d\n", gain);
	}
	return 0;
}

