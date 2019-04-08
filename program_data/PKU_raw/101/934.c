/*
 * WhoEatsMore.cpp
 *
 *  Created on: 2012-10-19
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main(){
	int o[6][3]={{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}};//?????????a?b?c????1??a?2??b?3??c
	int i=0;
	for (;i<6;i++){
		int a=0,b=0,c=0;				//??for?????a?b?c?????
		for (int j=0;j<=2;j++){
			if (o[i][j]==1) a=j+1;
		}
		for (int j=0;j<=2;j++){
			if (o[i][j]==2) b=j+1;
		}
		for (int j=0;j<=2;j++){
			if (o[i][j]==3) c=j+1;
		}
		int p[3]={(a<b)+(c==b),(a>b)+(a>c),(c>b)+(b>a)};
		if (p[o[i][1]-1]<p[o[i][2]-1]<p[o[i][3]-1]) break;//???????????????
	}

	for (int j=0;j<=2;j++){				//??????
		if (o[i][j]==1) cout <<'A';
		if (o[i][j]==2) cout <<'B';
		if (o[i][j]==3) cout <<'C';
	}
	return 0;
}
