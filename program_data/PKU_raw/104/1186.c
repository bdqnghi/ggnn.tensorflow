int main(){
	int x,y,an[15]={0},bn[15]={0};
	scanf("%d%d",&x,&y);
	int i=0,j=0,t=1;
	while(x!=0){
		an[i]=x;
		x=x/2;
		i++;
	}
	while(y!=0){
		bn[j]=y;
		y=y/2;
		j++;
	}
	while(1){
		if(an[i-t]!=bn[j-t]||i-t<0||j-t<0)break;
		t++;
	}
	printf("%d",an[i-t+1]);
	return 0;
}
