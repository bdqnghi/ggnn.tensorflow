/*
 * 253.cpp
 *
 *  Created on: 2011-12-29
 *      Author: think
 */
int main(){
	char a[100]="";
	cin.getline(a,100);
	char c1[50]="",c2[50]="";
	int i,j;
	for(i=0;a[i]!=' ';i++){
		c1[i]=a[i];
	}
	int length1=i;
	for(i++;i<50&&a[i]!=0;i++){
		c2[i-length1-1]=a[i];
	}
	int length2=i-length1-1;
	if(length1!=length2){
		cout<<"NO"<<endl;
		return 0;
	}
	for(i=0,j=0;i<length1;i++){
		for(j=0;j<length2;j++){
			if(c2[j]==c1[i]){
				c2[j]=' ';break;
			}
		}
		if(j==length2){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
