
int main()
{
	int n[100], k, i, t1, t2;
    scanf("%d", &k);
	t1 = 0;
	t2 = 0;
	for(i = 1; i <= k; i++){
		scanf("%d", &n[i]);
        if(n[i] > t1){
			t2 = t1;
			t1 = n[i];
			
		}
		else if(n[i] > t2 && n[i] < t1){
			t1 = t1;
			t2 = n[i];
		}
		else if(n[i] < t2){
			t1 = t1;
			t2 = t2;
		}
	}
	printf("%d\n%d", t1, t2);
	return 0;
}

