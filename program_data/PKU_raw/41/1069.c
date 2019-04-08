/*
 * b.cpp
 *
 *  Created on: 2013-11-8
 *      Author: b
 */
int main(){
	int A,B,C,D,E;
	int g=0,sum=0;//sum?????????
	for(A=5;A<=5;A++){//?????
		for(B=2;B<=5;B++){
			if(A==B) continue;//???????????????????
			for(C=1;C<=5;C++){
				if((A==C)||(B==C)) continue;
				for(D=1;D<=5;D++){
					if((A==D)||(B==D)||(C==D)) continue;
					for(E=1;E<=5;E++){
						if((A==E)||(B==E)||(C==E)||(D==E)) continue;
						if((E==2)||(E==3)) continue;//?????????
						sum=0;//sum?0

						if((A==1)||(A==2)&&(E==1)){//??A?1?2?????????
									 sum+=1;
								}
						if((B==1)||(B==2)&&(B==2)){//??B?1?2??????????
										sum+=1;
									}
						if((C==1)||(C==2)&&(A==5)){//??C?1?2??????????
											 sum+=1;
										}
						if((D==1)||(D==2)&&(C!=1)){//??D?1?2??????????
												 sum+=1;
											}
						if((E==1)||(E==2)&&(D==1)){//??E?1?2??????????
													 sum+=1;
												}
						if(sum==2){
							cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
							g=1;
							break;
						}
					}
					if(g==1) break;
				}
				if(g==1) break;
			}
			if(g==1) break;
		}
		if(g==1) break;
	}
	return 0;
}