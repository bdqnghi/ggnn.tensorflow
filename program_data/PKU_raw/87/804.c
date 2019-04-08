int main(){
	int a[6][1000],b[1000],c,d,h;
	for(c=0;c<1000;c++){
		for(h=0;h<6;h++){
		scanf("%d",&a[h][c]);
		}
		if(a[0][c]==0&&a[1][c]==0&&a[2][c]==0&&a[3][c]==0&&a[4][c]==0&&a[5][c]==0){
			break;}
	}
		for(d=0;d<c;d++){
			b[d]=(a[3][d]+12-a[0][d])*3600+(a[4][d]*60)+a[5][d]-a[1][d]*60-a[2][d];
	        printf("%d\n",b[d]);
		}
	return 0;
}