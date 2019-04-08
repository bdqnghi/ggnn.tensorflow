/*
 * 3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int y1,m1,d1,y2,m2,d2,sum=0;
	int i;

	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int a[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	
		
	if(y1<y2)
	{
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{
		a[2]=29;
	}
	else a[2]=28;
	for(i=m1+1;i<12;i++)
		sum=sum+a[i];
	sum=sum+a[m1]-d1;
	if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			a[2]=29;
		}
	else a[2]=28;
	for(i=1;i<m2;i++)
		sum=sum+a[i];
	sum=sum+d2;
	for(i=y1+1;i<y2;i++)
	{
	if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		sum=sum+366;
	else
		sum=sum+365;
	}
	cout<<sum+1+30;
	}
   if(y1==y2)
   {
	   if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	   		{
	   			a[2]=29;
	   		}
	 	else a[2]=28;
	   if(m1==m2)
	   {
		   sum=d2-d1;
		   cout<<sum;
	   }
	   else
	   {
	   for(i=m1+1;i<m2;i++)
		   sum=sum+a[i];
	   sum=sum+a[m1]-d1+d2;
	   cout<<sum;}
   }
	return 0;
}
