int m,n,a[100],b[100],c[200];
void shuru(int x,int y,int a[],int b[]){
	cin>>x>>y;
	m=x;
	n=y;
	for(int i=0;i<x;i++) { cin>>a[i]; }
	for(int i=0;i<y;i++) { cin>>b[i]; }
	}//???? 
void paixu(int x[],int l){
	for(int i=0;i<l-1;i++){
		for(int j=0;j<l-1-i;j++){
			if(x[j]>x[j+1]){
				int p;
				p=x[j];
				x[j]=x[j+1];
				x[j+1]=p;
				}
			}
		}
	} //?????? 
void hebing(int a[],int b[],int c[],int m,int n){
	for(int i=0;i<m;i++) { c[i]=a[i]; }	
	for(int i=0;i<n;i++) { c[i+m]=b[i]; }		
	} //???? 
void shuchu(int c[], int m, int n){
	for(int i=0;i<n+m;i++){ 
		if(i==0)cout<<c[i];
		else cout<<" "<<c[i];
	    }
	} //???? 
int main(){
	shuru(m,n,a,b);
	paixu(a,m);
	paixu(b,n);
	hebing(a,b,c,m,n);
	shuchu(c,m,n);

	return 0;
	} 