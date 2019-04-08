// kaoshi.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int sz[1000][6],i,j,k=0,s;
	for(i=0;i<1000;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sz[i][j]);
		}
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){
			break;
		}else{
			k++;
		}
	}
	for(i=0;i<k;i++){
	s=(sz[i][3]+12-sz[i][0])*3600+(sz[i][4]*60+sz[i][5]-sz[i][1]*60-sz[i][2]);
	printf("%d\n",s);
	}
	return 0;
}

