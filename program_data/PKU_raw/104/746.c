/*
 * 1062.cpp
 *
 *  Created on: 2011-11-15
 *      Author: sony
 */

int route(int x,int y){                //??????,????????????,???????????????
	if(x==y) return x;
	if(x>y) return route(x/2,y);
	if(x<y) return route(x,y/2);
	else return route(x/2,y/2);
}


int main()
{
	int x,y;
	cin>>x>>y;
	cout<<route(x,y)<<endl;
	return 0;
}
