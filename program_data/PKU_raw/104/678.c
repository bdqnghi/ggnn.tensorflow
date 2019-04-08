/*
 * 1.cpp
 *???  ????????
 *  Created on: 2011-11-14
 *      Author: wangwenxia1963
 */
int main()
{
	int x,y,i,j;
	cin>>x>>y;
	for(i=1;x/i>0;i=i*2)
	;
	for(j=1;y/j>0;j=j*2)
	;
	i=i/2;j=j/2;//i,j????2?????
	if(i>j)
		x=x*j/i;
	else y=y*i/j;
	while(x!=y)
		{
		x=x/2;
		y=y/2;
		}
	cout<<x;






}
