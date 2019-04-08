
int main(){
int i,j;
int k[5][5];
for(i=0;i<=4;i++){
	for(j=0;j<=4;j++){
		scanf("%d",&k[i][j]);
	}
}
int a,b;
scanf("%d %d",&a,&b);
if(a>=0&&a<=4&&b>=0&&b<=4){
	int h[5];
	for(i=a;;){
		for(j=0;j<=4;j++){
			h[j]=k[i][j];
			k[i][j]=k[b][j];
			k[b][j]=h[j];
		}
		break;
	}
	for(i=0;i<=4;i++){
	for(j=0;j<=4;j++){
		if(j==0)
			printf("%d",k[i][j]);
		else if(j==4)
			printf(" %d\n",k[i][j]);
		else
			printf(" %d",k[i][j]);
	}
}
}
else
printf("error");
	return 0;
}