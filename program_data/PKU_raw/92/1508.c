
int cmp ( const void *a , const void *b ) 
{ 
	return *(int *)a - *(int *)b; 
} 

int main (int argc, const char * argv[]) {
    int n;
	int tian[1001];
	int king[1001];
	scanf("%d",&n);
	int finish=0;
	if (n==0) {
		finish=1;
	}
	while (finish==0) {
		if (n==0) {
			finish=1;
			break;
		}
		int i;
		for (i=0; i<n; i++) {
			scanf("%d",&tian[i]);
		}
		for (i=0; i<n; i++) {
			scanf("%d",&king[i]);
		}
		qsort(tian, n, sizeof(int), cmp);
		qsort(king, n, sizeof(int), cmp);
		int ltian,rtian,lking,rking;
		ltian=0;
		rtian=n-1;
		lking=0;
		rking=n-1;
		int money=0;
		for (i=0; i<n; i++) {
			if (tian[rtian]>king[rking]) {
				money+=200;
				rtian--;
				rking--;
			}
			else if(tian[ltian]>king[lking])
			{
				money+=200;
				ltian++;
				lking++;
			}
			else {
				if (tian[ltian]>king[rking]) {
					money+=200;
					ltian++;
					rking--;
				}
				else if(tian[ltian]==king[rking])
				{
					ltian++;
					rking--;
				}
				else if(tian[ltian]<king[rking])
				{
					money-=200;
					ltian++;
					rking--;
				}
			}
		}
		printf("%d",money);
		scanf("%d",&n);
		if (n!=0) {
			printf("\n");
		}
		else {
			finish=1;
		}
	}
    return 0;
}