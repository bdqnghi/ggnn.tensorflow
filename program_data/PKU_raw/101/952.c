/*
 * 220.cpp
 *
 *  Created on: 2012-11-11
 *      Author: wu
 */


int main(){
	int A,B,C,a,b,c,i;
	char pai[4];
	for(A=1;A<=3;A++){
		for(B=1;B<=3;B++){
			for(C=1;C<=3;C++){
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if(((A+a)==(B+b))&&((A+a)==(C+c))){
					for(i=1;i<=3;i++){
						if(i==A){
							pai[i]='A';
						}
						else if(i==B){
							pai[i]='B';
						}
						else if(i==C){
							pai[i]='C';
						}

					}
					for(i=1;i<=3;i++){
						cout<<pai[i];
					}
				}
				}
			}
	}

	return 0;



}