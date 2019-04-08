/*
 * 2.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */
int main(){
	int z,q,s,l;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++){
					if(((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q)&&q!=z&&s!=z&&s!=q&&l!=z&&l!=q&&l!=s){//?????????????
						char a[4];int b[4]={z,q,s,l};
						a[0]='z';
						a[1]='q';
						a[2]='s';
						a[3]='l';
					for(int j=3;j>0;j--)
						for(int i=0;i<j;i++){
							if(b[i]<b[i+1]){
								int t=b[i];b[i]=b[i+1];b[i+1]=t;
								char s=a[i];a[i]=a[i+1];a[i+1]=s;
							}//????
						}
					for(int k=0;k<4;k++)
						cout<<a[k]<<" "<<b[k]*10<<endl;//??

				}}
	return 0;
}
