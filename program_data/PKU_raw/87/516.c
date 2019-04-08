int main(){
    int a,i,j,sz[100][6],sz2[100];
	for(i=0;i<100;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sz[i][j]);
			if((sz[i][0]==0)&&(sz[i][1]==0)&&(sz[i][2]==0)&&(sz[i][3]==0)&&(sz[i][4]==0)&&(sz[i][5]==0)){
				break;
			}
		}
	}
		for(i=0,j=0;i<100;i++,j++){
			sz2[j]=(sz[i][3]+12)*3600+sz[i][4]*60+sz[i][5]-sz[i][0]*3600-sz[i][1]*60-sz[i][2];
			
			if((sz[i][0]==0)&&(sz[i][1]==0)&&(sz[i][2]==0)&&(sz[i][3]==0)&&(sz[i][4]==0)&&(sz[i][5]==0)){
				a=i;
				break;
			}
		}
		for(j=0;j<a;j++){
			printf("%d\n",sz2[j]);
		}
   return 0;
	}
