/*
 * findnum_0.cpp
 *
 *  Created on: 2013-12-6
 *      Author: ??
 */
int main(){
	char a[45],*p=a;int go[45],i,j=0;
	cin.getline(a,45);
	for(i=0;*(p+i)!='\0';i++){
		if(*(p+i)>=48&&*(p+i)<=57){
			go[j]=i;
			for(i=go[j];;i++){
				if(*(p+i)<48||*(p+i)>57){
					//end[j]=i-1;
					*(p+i)='\0';
					j++;
					break;
				}
			}
		}
	}
	p=a;
	for(i=0;i<j;i++){
		cout<<p+go[i]<<endl;
	}
	return 0;
}
