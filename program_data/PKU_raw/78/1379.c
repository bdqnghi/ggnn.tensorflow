



int main(){

	int r[4][2];
	r[0][1]='z';
	r[1][1]='q';
	r[2][1]='s';
	r[3][1]='l';

	for(int i=10;i<=50;i+=10){
	for(int j=10;j<=50;j+=10){
	for(int k=10;k<=50;k+=10){
	for(int m=10;m<=50;m+=10){
	
		if(i+j==k+m){
			if(i+m>j+k){
				if(i+k<j){
					r[0][0]=i;
					r[1][0]=j;
					r[2][0]=k;
					r[3][0]=m;
				}
			}
		}

	}
	}
	}
	}

	for(int i=3;i>0;i--){
		for(int j=i;j>0;j--){
			if(r[j][0]>r[j-1][0]){
				int tmp=r[j][0];
				r[j][0]=r[j-1][0];
				r[j-1][0]=tmp;
				char tmpc=r[j][1];
				r[j][1]=r[j-1][1];
				r[j-1][1]=tmpc;
			}
		}
	}

	for(int i=0;i<4;i++){
		cout<<(char)r[i][1]<<' '<<r[i][0];
		if(i<3) cout<<endl;
	}

	return 0;
	
}