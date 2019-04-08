int main(){
int t[50][6];
int i,k,s,a,x;
for(i=0;i<50;i++){
	for(k=0;k<6;k++){
		scanf("%d",&t[i][k]);
	}
}
for(i=0;t[i][0]!=0;i++){
		a=t[i][0]*60*60+t[i][1]*60+t[i][2];
		x=(t[i][3]+12)*60*60+t[i][4]*60+t[i][5];
		s=x-a;
		printf("%d\n",s);
	}
	return 0;
}