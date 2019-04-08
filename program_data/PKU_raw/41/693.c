/*
 * 12.11.10d.cpp
 *  Created on: 2012-11-10
 *  Author: ???
 *  ???????
 */
int main() {
	int a,b,c,d,e,word[6];
	for(a=1;a<=5;a++){
		for(b=1;b<=5;b++){
			for(c=1;c<=5;c++){
				for(d=1;d<=5;d++){
					e=15-a-b-c-d;
					if(a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e)continue;
					word[a]=(e==1);
					word[b]=(b==2);
					word[c]=(a==5);
					word[d]=(c!=1);
					word[e]=(d==1);
					if(e==2||e==3)continue;
					if(word[1]==1&&word[2]==1&&word[3]==0&&word[4]==0&&word[5]==0){
						cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}