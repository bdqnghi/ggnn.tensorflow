/*
 * 1062 ???.cpp
 *
 *  Created on: 2010-11-21
 *      Author: ???
 */
int main()
{
	int x[11],y[11],i,j,l1,l2;
	cin>>x[1]>>y[1];
	i=1;
	while (x[i]!=1)
	{
	   if (x[i]%2==0)
	   {i=i+1;x[i]=x[i-1]/2;}
	   else
	   {i=i+1;x[i]=(x[i-1]-1)/2;}
	}
	l1=i;
	i=1;
	while (y[i]!=1)
	{
	   if (y[i]%2==0)
	   {i=i+1;y[i]=y[i-1]/2;}
	   else
	   {i=i+1;y[i]=(y[i-1]-1)/2;}
	}
	l2=i;
	for (i=1;i<=l1;i++)
	{
		for (j=1;j<=l2;j++)
		{
			if (x[i]==y[j])
				{cout<<x[i];break;}

		}
		if (x[i]==y[j])
			break;
	}
	return 0;
}