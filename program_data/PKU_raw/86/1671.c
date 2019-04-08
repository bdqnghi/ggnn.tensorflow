int main()
{
	//int ans = 60;
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		//int ans = 60;
		int t;
		int temp = 0;//???? 
		int spe = 0;//???? 
		scanf("%d",&t);
		for(int i = 1;i <= t;i ++){
			int now;
			scanf("%d",&now);
			if(now + temp * 3 < 57){
				temp ++;
			}
			if(now + temp * 3 >= 57 && now + temp * 3 < 60 && spe == 0) spe = 60 - now - temp * 3;
			
		}
		printf("%d\n",60 - temp * 3 - spe);
	}
	return 0;
}