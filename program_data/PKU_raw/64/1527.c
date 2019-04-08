/*
 * julipaixu.cpp
 * ??:??????????n??????
 *  Created on: 2012-11-7
 *      Author: ???
 */



int main()
{
	int n,i=0,j=0,k=0;     //????,n??????
	double t1,d;         //????????
	int t2,t3;            //????????
	cin>>n;            //??n
	int point[3][n], num[2][n*(n-1)/2];//??????point,num??????????
	double distance [n*(n-1)/2];//??????distance,??????
	for(i=0;i<n;i++)           //??????
		cin>>point[0][i]>>point[1][i]>>point[2][i];
	for(i=0;i<n-1;i++)          //????,????????,????????
		for(j=i+1;j<n;j++)
			{
			d=(point[0][i]-point[0][j])*(point[0][i]-point[0][j])
				+(point[1][i]-point[1][j])*(point[1][i]-point[1][j])
			    +(point[2][i]-point[2][j])*(point[2][i]-point[2][j]);
			distance[k]=sqrt(d);
			num[0][k]=i;
			num[1][k]=j;
	         k++;
			}
	for(j=1;j<n*(n-1)/2;j++)    //????????????,?????num?????
		for(i=0;i<(n*(n-1)/2)-j;i++)
			if(distance[i]<distance[i+1])
			{
				t1=distance[i+1];
			    distance[i+1]=distance[i];
			    distance[i]=t1;
			    t2=num[0][i+1];
			    num[0][i+1]=num[0][i];
			    num[0][i]=t2;
			    t3=num[1][i+1];
			    num[1][i+1]=num[1][i];
			    num[1][i]=t3;
			}
	for(k=0;k<n*(n-1)/2;k++) //?????????
		{
		i=num[0][k];
	    j=num[1][k];
		cout<<'('<<point[0][i]<<','<<point[1][i]<<','<<point[2][i]<<")-("
			<<point[0][j]<<','<<point[1][j]<<','<<point[2][j]<<")="
			<<fixed<<setprecision(2)<<distance[k]<<endl;
		}
		return 0;
}