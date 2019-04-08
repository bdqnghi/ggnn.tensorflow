const int MAXN=6;
int a[MAXN]={0,1,2,3,4,5};
int main(){
	do{
        if(a[5]==2||a[5]==3)continue;
        if((a[1]==1||a[1]==2)&&a[5]!=1)continue;
		if(a[1]!=1&&a[1]!=2&&a[5]==1)continue;
		if(a[2]==1)continue;
		if((a[3]==1||a[3]==2)&&a[1]!=5)continue;
		if(a[3]!=1&&a[3]!=2&&a[1]==5)continue;
		if((a[4]==1||a[4]==2)&&a[3]==1)continue;
		if(a[4]!=1&&a[4]!=2&&a[3]!=1)continue;
		if((a[5]==1||a[5]==2)&&a[4]!=1)continue;
		if(a[5]!=1&&a[5]!=2&&a[4]==1)continue;
		for(int i=1;i<5;i++){
			cout<<a[i]<<' ';
		}
		cout<<a[5];
		return 0;
	}while(next_permutation(a+1,a+6));
	return 0;
}