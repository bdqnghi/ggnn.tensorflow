int row,col,array[MAXN][MAXN],sign[MAXN][MAXN];

int main(){
	memset(array,0,sizeof(array));
	memset(sign,0,sizeof(sign));
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++) cin>>array[i][j]; 
	}
	int num=0,sxy=0,cxy=0,mrow=0,mcol=0;;//0==x,1==y;0==left->right/down;1==right/up
	while(num<row*col){
		if(sxy==0){
			while(mcol<col&&mcol>=0){
				if(sign[mrow][mcol]==0)	{
					cout<<array[mrow][mcol]<<endl;
					num++;
				}
				sign[mrow][mcol]=1;
				if(cxy==0){
					if(mcol+1<col&&sign[mrow][mcol+1]==0) mcol++;
					else break;
				}
				else{
					if(mcol-1>=0&&sign[mrow][mcol-1]==0) mcol--;
					else break;
				}
			}
			sxy=1;
		}
		else{
			while(mrow<row&&mrow>=0){
				if(sign[mrow][mcol]==0){
					cout<<array[mrow][mcol]<<endl;
					num++;
				}
				sign[mrow][mcol]=1;
				if(cxy==0){
					if(mrow+1<row&&sign[mrow+1][mcol]==0) mrow++;
					else break;
				}
				else{
					if(mrow-1>=0&&sign[mrow-1][mcol]==0) mrow--;
					else break;
				}
			}
			sxy=0;
			cxy=(cxy) ? 0 : 1;
		}
	}
}