
int main(){
	int x,y;
	cin>>x>>y;
	int a[11]={x},b[11]={y};	//???a,b??x,y???
	for(int i=1;a[i-1]!=1;i++){
		if(a[i-1]%2==0)
			a[i]=a[i-1]/2;
		else a[i]=(a[i-1]-1)/2;
		}	//??x???
	for(int i=1;b[i-1]!=1;i++){
		if(b[i-1]%2==0)
			b[i]=b[i-1]/2;
		else b[i]=(b[i-1]-1)/2;
		}   //??y???
	for(int j=0;a[j]!=0;j++)
		for(int k=0;b[k]!=0;k++)
			if(a[j]==b[k]){
				cout<<a[j];		//???????,??????xi,??
				a[j+1]=0;
				break;
			}
	return 0;
}