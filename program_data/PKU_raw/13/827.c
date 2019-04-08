/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-10-19
 *      Author: Li Wenpeng
 */
int main()
{
	int n,a[20001],p[200],x,step=-1;
	cin>>n;
	memset(p,0,sizeof(p));
	memset(a,0,sizeof(a));
	for (int i=0;i<n;i++)                //????
	{
		cin>>x;
		if (p[x]==0)                     //?????????????????
				{
			step++;                      //????????1
			a[step]=x;
			p[x]=1;                      //???x?????
				}
	}
	cout<<a[0];
	for (int j=1;j<=step;j++) cout<<' '<<a[j];
	return 0;
}

