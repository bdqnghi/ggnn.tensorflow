/*
 * step.cpp
 *
 *  Created on: 2013-12-1
 *      Author: ???1300012996
 */
int a[100],b[100],c[200],i,j,m,n;
void read(void){
	cin>>m>>n;
	for(i=0;i<m;i++){cin>>a[i];}
	for(i=0;i<n;i++){cin>>b[i];}
	return;
}
void place(void){
	int s;
	for(i=1;i<m;i++){
		for(j=0;j<m-i;j++){
			if(a[j]>a[j+1]){s=a[j];a[j]=a[j+1];a[j+1]=s;}
		}
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(b[j]>b[j+1]){s=b[j];b[j]=b[j+1];b[j+1]=s;}
		}
	}
	return;
}
void together(void){
	for(i=0;i<m;i++){c[i]=a[i];}
	for(i=m;i<m+n;i++){c[i]=b[i-m];}
	return;
}
void put(void){
	for(i=0;i<m+n;i++){
		if(i==0){cout<<c[i];}
		else{cout<<' '<<c[i];}
	}
	return;
}


int main(){
	read();
	place();
	together();
	put();
	return 0;
}
