/*
 * pl.cpp
 *
 *  Created on: 2011-12-25
 *      Author: wuch
 */
int main(){
	char a[1000],b[1000],temp;
	int l1,l2,i,j;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for (i=0;i<l1-1;i++){
		for (j=i+1;j<l1;j++){
			if (a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0;i<l2-1;i++){
		for (j=i+1;j<l2;j++){
			if (b[i]<b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	if (strcmp(a,b)==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}