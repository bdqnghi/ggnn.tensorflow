int cmp(const void *e1,const void *e2){
	return *(int*)e2-*(int*)e1;
}
int main(){
	int a[2][1000];
	int n,i,j,i1,i2,j1,j2;
	while(cin>>n){
		int i1=0,i2=0,j1=n-1,j2=n-1;
		if(n==0)
			break;
		qsort(a[0],n,sizeof(int),cmp);
		for(i=0;i<2;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
			qsort(a[i],n,sizeof(int),cmp);
		}
		int answer=0;
		for(i=0;i<n;i++){
			if(a[0][j1]<a[1][j2]){
				answer-=200;
				i2++;
				j1--;
			}
			else if(a[0][j1]>a[1][j2]){
				answer+=200;
				j2--;
				j1--;
			}
			else if(a[0][i1]<a[1][i2]){
				answer-=200;
				i2++;
				j1--;
			}
			else if(a[0][i1]>a[1][i2]){
				answer+=200;
				i1++;
				i2++;
			}
			else {
				if(a[0][i1]==a[0][j1]){
					j1--;
					j2--;
				}
				else{
					answer-=200;
					i2++;
					j1--;
				}
			}
		}
		cout<<answer<<endl;
	}
	return 0;
}