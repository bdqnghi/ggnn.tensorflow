int main(){
	int n;
	scanf("%d",&n);
	char sz1[100][21];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",sz1[i]);
	}
	int sz2[100];
    for(i=0;i<n;i++){
		sz2[i]=strlen(sz1[i]);
	}
	char sz3[100][10];
	for(i=0;i<n;i++){
        for(j=0;j<sz2[i];j++){
			if(sz1[i][j]<=47||sz1[i][j]>=58&&sz1[i][j]<=64||sz1[i][j]>=91&&sz1[i][j]<=94||sz1[i][j]==96||sz1[i][j]>=123||sz1[i][0]>=48&&sz1[i][0]<=57){
				sz3[i][0]='n';
			    sz3[i][1]='o';
			    sz3[i][2]=0;
				break;
			}else{
				sz3[i][0]='y';
			    sz3[i][1]='e';
				sz3[i][2]='s';
			    sz3[i][3]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		puts(sz3[i]);
	}
	return 0;
}


			

	





