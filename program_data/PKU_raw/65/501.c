int main(){
int n,i;
int game[201][2]={0};
int a=0,b=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&game[i][0],&game[i][1]);
}
for(i=0;i<n;i++){
	if(game[i][0]==game[i][1]){
		continue;}
	else if(game[i][0]==0&&game[i][1]==1){
		a++;
		continue;
	}
	else if(game[i][0]==0&&game[i][1]==2){
		b++;
		continue;
	}
	else if(game[i][0]==1&&game[i][1]==0){
		b++;
		continue;
	}
	else if(game[i][0]==1&&game[i][1]==2){
		a++;
		continue;
	}
	else if(game[i][0]==2&&game[i][1]==0){
		a++;
		continue;
	}
	else if(game[i][0]==2&&game[i][1]==1){
		b++;
		continue;
	}
}
if(a==b){
	printf("Tie");
}
else if(a>b){
	printf("A");
}
else{
	printf("B");
}
	return 0;
}