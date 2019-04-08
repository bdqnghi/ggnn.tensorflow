int main()
{
	int n;
	scanf("%d", &n);
	int y[1000], m1[1000], m2[1000];
	int month[13];
	int sum1[1000], sum2[1000];
	sum1[0] = 0;
	sum2[0] = 0;
	int i, t, k;
	for(i=0;i<n;i++){
		scanf("%d%d%d", &y[i], &m1[i], &m2[i]);
			if(y[i]%4==0&&y[i]%100!=0||y[i]%400==0){
				int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
				for(k=0;k<13;k++){
					sum1[k+1] = sum1[k] + month[k];
				}
					if((sum1[m1[i]] - sum1[m2[i]])%7==0){
						printf("YES\n");
					}
					else{
						printf("NO\n");
					}
			}
			else{
					int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
					for(t=0;t<13;t++){
						sum2[t+1] = sum2[t] + month[t];
					}
						if((sum2[m1[i]] - sum2[m2[i]])%7==0){
							printf("YES\n");
						}
						else{
							printf("NO\n");
						}
				}
	}
	return 0;
}