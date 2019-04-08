//============================================================================
// Name        : shj.cpp
// Author      : ???
// Time        : 2013.11.27
// Description : ????????????????????????
//============================================================================
int x[1000],y[1000],z[2000];
int i,j,n,m,ex;
void read(){
	cin>>n>>m;//????
	for(i=0;i<n;i++)
		cin>>x[i];//????????
	for(i=0;i<m;i++)
		cin>>y[i];//????????
}
void paixu(){//?????
	for(i=0;i<n;i++)//?????
		for(j=0;j<n-1;j++)
			if(x[j+1]<x[j]){
				ex=x[j];
				x[j]=x[j+1];
				x[j+1]=ex;
			}
	for(i=0;i<m;i++)//?????
			for(j=0;j<m-1;j++)
				if(y[j]>y[j+1]){
					ex=y[j];
					y[j]=y[j+1];
					y[j+1]=ex;
				}
}
void heping(){
	for(i=0;i<n;i++)
		z[i]=x[i];//??x[]????z[]
	for(i=0;i<m;i++)
		z[n+i]=y[i];//??y[]????z[]
}
void display(){
	for(i=0;i<n+m;i++){//????
		if(i==0)cout<<z[i];
		else cout<<" "<<z[i];
	}
}
int main() {
    read();//????
    paixu();
    heping();
    display();
	return 0;
}