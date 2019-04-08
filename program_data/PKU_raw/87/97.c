int main (){
    int sz[40][6];
	int a,b,c,d,e,f;
    for(a=0;a<40;a++){
		for(b=0;b<6;b++){
			scanf("%d",&sz[a][b]);
		}
		if((sz[a][0]==0)&&(sz[a][1]==0)&&(sz[a][2]==0)&&(sz[a][3]==0)&&(sz[a][4]==0)&&(sz[a][5]==0)){
			break;
		}
	}
	c=a;
	for(a=0;a<c;a++){
		b=60-sz[a][2];
		d=59-sz[a][1];
		e=11-sz[a][0];
		f=e*3600+d*60+b+sz[a][3]*3600+sz[a][4]*60+sz[a][5];
		printf("%d\n",f);
	}
	return 0;
}
		
