int main(){
	int s[100][100], a, b, i, j, xx_a, xx_b, sx_a, sx_b , n;
	scanf("%d %d", &a, &b);
	xx_a=0;
	xx_b=0;
	sx_a=a-1;
	sx_b=b-1;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &s[i][j]);}}
	while(sx_a>xx_a&&sx_b>xx_b){
		for(j = xx_b; j < sx_b; j++){
			printf("%d\n", s[xx_a][j]);}
		for(i = xx_a; i < sx_a; i++){
			printf("%d\n", s[i][sx_b]);}
		for(j = sx_b; j > xx_b; j--){
			printf("%d\n", s[sx_a][j]);}
		for(i = sx_a; i > xx_a; i--){
			printf("%d\n", s[i][xx_b]);}
		sx_a--;
		sx_b--;
		xx_a++;
		xx_b++;}
	if((a*b)%2!=0){
		if(a<b){
			for(j = xx_a;j <= sx_b;j++){
				printf("%d\n", s[xx_a][j]);}}
		else{
			for(j = xx_b;j <= sx_a;j++){
				printf("%d\n", s[j][xx_b]);}}}
	else if((b%2==0)&&(a%2!=0)&&(b>a)){
		for(j = xx_a;j <= sx_b;j++){
			printf("%d\n", s[xx_a][j]);}}
	else if((a%2==0)&&(b%2!=0)&&(a>b)){
		for(j = xx_b;j <= sx_a;j++){
			printf("%d\n", s[j][xx_b]);}}
	return 0;
}
