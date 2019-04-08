

int main(int argc, char* argv[])
{
	int ROW,COL,row,col,rowxia,rowup,colxia,colup;
	int array[99][99];
	scanf("%d%d",&ROW,&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
	scanf("%d",&array[row][col]);}}
	for(rowxia=0,rowup=ROW-1,colxia=0,colup=COL-1;rowxia<rowup&&colxia<colup;rowxia++,colxia++,rowup--,colup--){
	for(row=rowxia,col=colxia;col<colup;col++){
    printf("%d\n",array[row][col]);}
		for(col=colup,row=rowxia;row<rowup;row++){
		printf("%d\n",array[row][col]);}
		for(row=rowup,col=colup;col>colxia;col--){
		printf("%d\n",array[row][col]);}
		for(col=colxia,row=rowup;row>rowxia;row--){
			printf("%d\n",array[row][col]);}}
	if(rowup==rowxia){
		for(col=colxia,row=rowup;col<=colup;col++){
			printf("%d\n",array[row][col]);}}
	else if(colup==colxia){
		for(row=rowxia,col=colup;row<=rowup;row++){
	printf("%d\n",array[row][col]);}}
	return 0;
}