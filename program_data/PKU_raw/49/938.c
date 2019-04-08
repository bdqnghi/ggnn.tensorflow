/*
 * duobianxingyouxi3.cpp
 *
 *  Created on: 2012-12-6
 *      Author: w
 */
int main(){
	char a[500];//?????
	cin >> a;
	int len=0;
	len = strlen(a);//???????
	int i=0,j=0,k=0,x=0;
	for(i=2;i<=len;i++){//?????
		for(j=0;j<len;j++){//???????
			x=0;//???
			if(i%2==0){//???????
				for(k=j;k<=j+(i/2)-1;k++){//????????
					if(a[k]!=a[2*j+i-1-k]){//???????????
						x=1;
					    break;}
					}
			}
			else{//??????
				for(k=j;k<=j+((i-1)/2)-1;k++){
					if(a[k]!=a[2*j+i-1-k]){
						x=1;
						break;
					}
				}
			}
			if(x==0){
				for(k=j;k<=j+i-1;k++){//???????
					cout << a[k];
				}
				cout << endl;
			}
		}
	}
	return 0;
}
