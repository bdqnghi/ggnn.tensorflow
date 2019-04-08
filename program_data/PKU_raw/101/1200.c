/*
 * play.cpp
 *
 *  Created on: 2014-6-15
 *      Author: de
 */

int main(){
	int a,b,c;
	int A,B,C;
	char att[3]={'A','B','C'};
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				A=(a<b)+(a==c);
				B=(b<a)+(c<a);
				C=(b<c)+(a<b);
				if((A==(2-a))&&(B==(2-b))&&(C==(2-c)))
					{
					cout<<"BCA"<<endl;		}
			}
		}
	}
	return 0;
}
