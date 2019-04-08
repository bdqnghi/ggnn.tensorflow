/*
 * CR.cpp
 *
 *  Created on: 2012-11-15
 *      Author: sony
 */

int a,b;
int x[101][101];
int p;
int sum;
void read(int start,int a,int b)
{
	int v,h;
	int i;
	v = start;h = start;
	if (a == 0 || b == 0)return;
	if (a == 1 && b == 1){cout <<x[v][h] <<endl;return;}
	for (i = 1;i <= b-1;i ++)
	{
		cout <<x[v][h]<<endl;
	    sum ++;
	    if (sum == p)return;
	    h ++;
	}
	for (i = 1;i <= a-1;i ++)
	{
		cout <<x[v][h]<<endl;
		sum ++;
		if (sum == p)return;
		v ++;
	}
	for (i = 1;i <= b-1;i ++)
	{
		cout <<x[v][h]<<endl;
		sum ++;
		if (sum == p)return;
		h --;
	}
	for (i = 1;i <= a-1;i ++)
	{
		cout <<x[v][h]<<endl;
		sum ++;
		if (sum == p)return;
		v --;
	}
	read(v+1,a-2,b-2);

}
int main()
{
    int j,r;
	sum = 0;
    cin >>a >>b;
    p = a*b;
    for (j = 1;j <= a;j ++)
    	for (r = 1;r <= b;r ++)
    		cin >>x[j][r];
    read(1,a,b);
    return 0;
}