int main(){
int row,col,t;
int jz[100][100];
t=1;
scanf("%d %d",&row,&col);
for(int f=0;f<row;f++){
	for(int g=0;g<col;g++){
scanf("%d",&jz[f][g]);}
}
for(int i=0;1;i++){
	if(t==row*col+1){
		break;}
	for(int n=i;n<col-i;n++){
		if(t==row*col+1){
		break;}
	printf("%d\n",jz[i][n]);
	t++;
	}
	for(int m=i+1;m<row-i;m++){
		if(t==row*col+1){
		break;}
		printf("%d\n",jz[m][col-(i+1)]);
		t++;}
	for (int k=col-(i+2);k>=i;k--){
		if(t==row*col+1){
		break;}
			printf("%d\n",jz[row-(i+1)][k]);
	t++;}
	for(int e=row-(i+2);e>=i+1;e--){
		if(t==row*col+1){
		break;}
	printf("%d\n",jz[e][i]);
	t++;}
	

}
return 0;

}




