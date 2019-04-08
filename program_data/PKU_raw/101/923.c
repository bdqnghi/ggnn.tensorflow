/*
 * fanliang.cpp
 *??????
 *  Created on: 2012-10-27
 *      Author: ??
 */

int main(){
	int a,b,c,i,j;//????a,b,c????
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++){//??????
				if(a==b||a==c||b==c) continue;//????
				if(((b>a)+(c==a)==(3-a))&&((a>b)+(a>c)==(3-b))&&((c>b)+(b>a)==(3-c))){//?????????
					int e[3]={a,b,c};
					char f[3]={'A','B','C'};
					for(i=0;i<2;i++)
						for(j=0;j<2-i;j++)
							if(e[j]>e[j+1]){
								swap(e[j],e[j+1]);
								swap(f[j],f[j+1]);
							}//????
					for(i=0;i<3;i++)
						cout<<f[i];//??
					break;
				}
			}
	return 0;
}