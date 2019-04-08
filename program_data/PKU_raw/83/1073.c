void main(){
	int n, i, k, t, j, c, e=0;
	float w=0, sum=0;
	scanf("%d", &n);
	int score[10];
	float GPA[10];
	float credit[10];
	for (i=1;i<=n;i++){
		scanf("%d", &k);
		score[i]=k;
	}
	for (j=1;j<=n;j++){
		scanf("%d", &t);
		if(90<=t&&t<=100){
			GPA[j]=4.0;}
        if(85<=t&&t<=89){
			GPA[j]=3.7;}
		if(82<=t&&t<=84){
			GPA[j]=3.3;}
        if(78<=t&&t<=81){
			GPA[j]=3.0;}
		if(75<=t&&t<=77){
			GPA[j]=2.7;}
		if(72<=t&&t<=74){
			GPA[j]=2.3;}
		if(68<=t&&t<=71){
			GPA[j]=2.0;}
        if(64<=t&&t<=67){
			GPA[j]=1.5;}
        if(60<=t&&t<=63){
			GPA[j]=1.0;}
        if(t<=60){
			GPA[j]=0;}
	}
	for (c=1;c<=n;c++){
		credit[c]=score[c]*GPA[c];
		e+=score[c];
		sum+=credit[c];
	}
	w=sum/e;
	printf("%.2f", w);
}


