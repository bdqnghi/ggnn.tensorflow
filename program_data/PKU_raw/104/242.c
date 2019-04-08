/*
 * ditui2.cpp
 *   ???
 *  Created on: 2010-11-20
 *      Author: ???
 */

int main(){
	int x[1002],y[1002];                //???????
	int i,j,lengthx=0,lengthy=0,c=0;    //lengthx,lengthy??x?y??????c????????
	cin>>x[0]>>y[0];
	for(i=1;i<=1002;i++)
		{x[i]=x[i-1]/2;
		lengthx++;
		if(x[i]==0)  break;
		}
	for(i=1;i<=1002;i++)
		{y[i]=y[i-1]/2;
		lengthy++;
		if(y[i]==0)  break;
		}
	for(i=0;i<=lengthx-1;i++)
		{for(j=0;j<=lengthy-1;j++)
			if(x[i]==y[j])
				{c=x[i];break;}
		if(c!=0) break;
		}
	cout<<c;
	return 0;
}