/*
 * 113.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */
int main(){
int z,q,s,l,i,j,t;
int a[5];//????
for(z=10;z<=50;z=z+10){
	for(q=10;q<=50;q=q+10){
		for(s=10;s<=50;s=s+10){
			for(l=10;l<=50;l=l+10){
				if(((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q)){  //????
					a[0]=z;
					a[1]=q;
					a[2]=s;
					a[3]=l;
					char n[100];   //??????
					n[a[0]]='z';
					n[a[1]]='q';
					n[a[2]]='s';
					n[a[3]]='l';    //???????
					for(i=0;i<4;i++){
						for(j=1;j<4-i;j++){    //??
							if(a[j]>a[j-1]){
								t=a[j];
								a[j]=a[j-1];
								a[j-1]=t;
							}
						}
					}
				cout<<n[a[0]]<<" "<<a[0]<<endl;
				cout<<n[a[1]]<<" "<<a[1]<<endl;
				cout<<n[a[2]]<<" "<<a[2]<<endl;
				cout<<n[a[3]]<<" "<<a[3]<<endl;
				}
			}
		}
	}
}
return 0;
}
