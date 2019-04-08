/*
 * n1.cpp
 *
 *  Created on: 2011-11-12
 *      Author: Administrator
 */

char a[6];

int judge(char x)              //???????5????????
{
	switch(x){
	case 'A':return (a[1]=='E');break;
	case 'B':return (a[2]=='B');break;
	case 'C':return (a[5]=='A');break;
	case 'D':return (a[1]!='C');break;
	case 'E':return (a[1]=='D');break;
	}
	return 0;
}

int main()
{
	const char r[6]={' ','A','B','C','D','E'};
	int step[6];

	for(step[5]=1;step[5]<=5;step[5]++)      //??5????
		for(step[4]=1;step[4]<=5;step[4]++){
			if (step[4]==step[5]) continue;
			for(step[3]=1;step[3]<=5;step[3]++){
				if(step[3]==step[4] || step[3]==step[5] ||step[3]==5) continue;
				for(step[2]=1;step[2]<=5;step[2]++){
					if(step[2]==step[3] || step[2]==step[4] ||step[2]==step[5] || step[2]==5) continue;
					for(step[1]=1;step[1]<=5;step[1]++){
						if(step[1]==step[2] || step[1]==step[3] ||step[1]==step[4] ||step[1]==step[5]) continue;

						a[1]=r[step[1]];      //?a?????a??????
						a[2]=r[step[2]];
						a[3]=r[step[3]];
						a[4]=r[step[4]];
						a[5]=r[step[5]];
 
						if(judge(a[1])+judge(a[2])!=2) continue;       //????????
						if(judge(a[3])+judge(a[4])+judge(a[5])>0) continue;

						int i;     
						//?????     ????????????void?????????????????????
						//?cout???????????
						for(i=1;i<=5;i++)
							if(a[i]=='A') cout<<i;
						for(i=1;i<=5;i++)
							if(a[i]=='B') cout<<' '<<i;
						for(i=1;i<=5;i++)
							if(a[i]=='C') cout<<' '<<i;
						for(i=1;i<=5;i++)
							if(a[i]=='D') cout<<' '<<i;
						for(i=1;i<=5;i++)
							if(a[i]=='E') cout<<' '<<i;
						return 0;
					}
				}
			}
		}
}
