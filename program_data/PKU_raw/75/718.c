/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-10
 *      Author: 7
 */
int main()
{
	int x[1000];
	int y[1000];
	char a;
	int i=0,j,num=0,max=0,n,minx=10000,maxy=0;
	while(cin>>x[i])
	{
		if(x[i]<minx)
			minx=x[i];
		i++;
		cin.get(a);
		if(a=='\n')
			break;
	}
	n=i;
	i=0;
	while(cin>>y[i])
		{
		if(y[i]>maxy)
			maxy=y[i];
			i++;
			cin.get(a);
			if(a=='\n'||i>n)
				break;
		}
	for(i=minx;i<maxy;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=x[j]&&i<y[j])
			{
				num++;
				if(num>max)
					max=num;
			}
		}
		num=0;
	}
	cout<<n<<" "<<max;
}
