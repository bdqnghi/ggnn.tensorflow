
int main(){
	const char r[6][3]={
		{'A','B','C'},
		{'A','C','B'},
		{'B','A','C'},
		{'C','A','B'},
		{'B','C','A'},
		{'C','B','A'}
 	};	
	const int n[6][3]={
		{1,1,1},
		{1,1,-1},	
		{-1,1,1},
		{1,-1,-1},
		{-1,-1,1},
		{-1,-1,-1} 
 	};	
	int nn[3][3]={{-1,2,0},{1,1,2},{-1,2,-1}},is,i;
	for(i=0;i<6;i++){
		is=1;
		int l[3]={0,0,0},L[3]={0,0,0};
		for(int j=0;j<3;j++){
			for(int p=0;p<3;p++){
				if(nn[p][j]==n[i][j]||!nn[p][j])
					l[p]++;
			}
		}
		if(l[0]>=l[1])
			L[0]=1;
		else
			L[0]=-1;
		if(l[1]>=l[2])
			L[2]=1;
		else 
			L[2]=-1;
		if(l[0]>=l[2])
			L[1]=1;
		else
			L[1]=-1;
		for(int w=0;w<3;w++){
			if(L[w]!=n[5-i][w]){
				is=0;
			}
 		}
		if(is==1){
			for(int x=0;x<3;x++)
				cout<<r[i][x];
                  break;
		}
	}
}