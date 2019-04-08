int main (){
	int n,i;
	double GPA=0;
	int sum=0;
	double score[10];
	int point[10];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(point[i]));}
    for(i=0;i<n;i++){
		scanf("%lf",&(score[i]));}
    for(i=0;i<n;i++){
		if(score[i]>=90&&score[i]<=100){
			score[i]=4.0;}
		else if(score[i]>=85&&score[i]<=89){
			score[i]=3.7;}
		else if(score[i]>=82&&score[i]<=84){
			score[i]=3.3;}
		else if(score[i]>=78&&score[i]<=81){
			score[i]=3.0;}
		else if(score[i]>=75&&score[i]<=77){
			score[i]=2.7;}
		else if(score[i]>=72&&score[i]<=74){
			score[i]=2.3;}
		else if(score[i]>=68&&score[i]<=71){
			score[i]=2.0;}
		else if(score[i]>=64&&score[i]<=67){
			score[i]=1.5;}
		else if(score[i]>=60&&score[i]<=63){
			score[i]=1.0;}
		else if(score[i]<60){
			score[i]=0.0;}
		GPA+=1.0*score[i]*point[i];
	}
    for(i=0;i<n;i++){
		sum+=point[i];}
	GPA/=sum;
	printf("%.2lf",GPA);
	return 0;
}
