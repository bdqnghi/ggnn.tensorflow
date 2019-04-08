/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-11-3
 *      Author: Li Wenpeng
 */
int main()
{
	int a[150][150],b[150][150];
	int m,n,i,j,x,y;
	memset(b,0,sizeof(b));        //?b????
	cin>>m>>n;
	for(i=1;i<=m;i++)             //??
		for(j=1;j<=n;j++){
			cin>>a[i][j];
			b[i][j]=1;
		}
	x=0;y=1;i=1;j=1;              //??a?1??1?
	cout<<a[1][1]<<endl;
	b[1][1]=0;
	while(x+y!=0){                //???????????
		if(b[i+x][j+y]>0) {
			cout<<a[i+x][j+y]<<endl;
			i=i+x;
			j=j+y;
			b[i][j]=0;
			continue;
		};                              //????????
		if (b[i+1][j]>0){x=1;y=0;continue;}
		if (b[i-1][j]>0){x=-1;y=0;continue;}
		if (b[i][j+1]>0){x=0;y=1;continue;}
		if (b[i][j-1]>0){x=0;y=-1;continue;}
		break;
	}
	return 0;
}
