int main(){
int row,col;
int array[100][100];
int i,j,a,b,c,d=0;
scanf("%d%d",&row,&col);
for(i=0;i<=row-1;i++){
	for(j=0;j<=col-1;j++){
       scanf("%d",&array[i][j]);}
}
c=0; 
for(a=0;2*a<=row&&2*a<=col;a++){
    for(b=a;b<=col-1-a;b++){
		printf("%d\n",array[c][b]);
		d++;}
	if(d==row*col)
	break;
	b=b-1;
	for(c=a+1;c<=row-1-a;c++){
		printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	c=c-1;
	for(b=col-2-a;b>=a;b--){
		printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	b=b+1;
	for(c=row-2-a;c>=a+1;c--){
       printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	c=c+1;
}
return 0;
}