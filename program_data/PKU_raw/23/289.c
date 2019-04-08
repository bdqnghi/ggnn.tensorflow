/*
 * homework1106.cpp
 *
 *  Created on: 2012-11-5
 *      Author: wangyinzhi
 */

int main(){
	char a[10000],word[100][100],t[100];
	cin.getline(a,sizeof(a));
	int k=0,i=0,j=0;
	for(i=0;i<=strlen(a);i++){
		if(a[i]!= ' '){
			word[k][j++]=a[i];
		}
		else {
			word[k][j]='\0';
			j=0;
			k=k+1;
		}
	}//????????word????

	int n=k+1;
	for (i=0;i<=n/2-1;i++){
		strcpy(t,word[i]);
		strcpy(word[i],word[k-i]);
		strcpy(word[k-i],t);//???????
	}
		for(i=0;i<=n-1;i++){
			if(i==0){
				cout<<word[i];
			}
			else cout<<" "<<word[i];//??
		}
	return 0;
}