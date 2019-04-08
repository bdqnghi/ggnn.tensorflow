int main(){
    int i,j,row,col,r,c,num,ro,co;
    int a[100][100];
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			scanf("%d",&a[i][j]);
			}
		}
	r=1;
	c=1;
	while(1){
		ro=r;
		co=c;
		while(1){
			printf("%d\n",a[ro][co]);
			ro++;
			co--;
			if(ro>row||co<=0){
				break;
				}
			}
		if(c==col&&r==row){
			break;
			}
		if(c<col){
			c++;
			}
		else{
			r++;
			}
		}
	return 0;
	}