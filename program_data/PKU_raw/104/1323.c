//============================================================================
// Name        : 7.6.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ???
//============================================================================

int findknot(float,float);
int findknot(float x,float y)
{
	if (x==y)//??x,y???????
		return (int)x;//x????
	if (ceil(log((double)x)/log(2))==ceil(log((double)y)/log(2)))//??x,y????
		return findknot(floor(x/2),floor(y/2));//?????
	else//??x,y?????
	{
		float tempmax=max(x,y);
		float tempmin=min(x,y);
		x=tempmax;
		y=tempmin;
		//??????x???????
		return findknot(floor(x/2),y);//x??????y??
	}
}
int main() {
	int inputx,inputy;
	cin >>inputx>>inputy;
	cout <<findknot((float)inputx,(float)inputy);
	return 0;
}