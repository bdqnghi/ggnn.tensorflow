int main(){
int n;
scanf("%d",&n);
int shu[1000][1000];
int i,j;
int sth,stl,enh,enl;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
	scanf("%d",&shu[i][j]);
	}
}
int b=-1;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(shu[i][j]==0&&b==-1){
		sth=i;
		stl=j;
		b=1;
		}
	}
}
int a=-1;
for(i=n-1;i>=0;i--){
	for(j=n-1;j>=0;j--){
		if(shu[i][j]==0&&a==-1){
		enh=i;
		enl=j;
		a=1;
		}
	}
}
int s;
s=(enh-sth-1)*(enl-stl-1);
printf("%d",s);
return 0;
}