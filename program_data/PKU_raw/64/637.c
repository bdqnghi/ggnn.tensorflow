/*
 * justexp.cpp
 *
 *  Created on: 2011-11-18
 *      Author: dell
 */
int main()
{
	int n,m,i,j,k,l;
	cin>>n;
	m=n*(n-1)/2;
	int point[n][3];
	for(i=0;i<n;i++)
		cin>>point[i][0]>>point[i][1]>>point[i][2];
	struct data
	{
		int point1[3];
		int point2[3];
		float len;
		int mark1;
		int mark2;
	}distance[m],temp;
	for(k=i=0;i<n-1;i++)
		for(j=i+1;j<n;j++,k++)
		{
			distance[k].len=0;
			for(l=0;l<3;l++)
			{
				distance[k].mark1=i;
				distance[k].mark2=j;
				distance[k].point1[l]=point[i][l];
				distance[k].point2[l]=point[j][l];
				distance[k].len+=(point[i][l]-point[j][l])*(point[i][l]-point[j][l]);
			}
			distance[k].len=sqrt(distance[k].len);
		}
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)
		{
			if(distance[i].len<distance[j].len)
			{
				temp=distance[i];
				distance[i]=distance[j];
				distance[j]=temp;
			}
			if(distance[i].len==distance[j].len)
			{
				if((distance[i].mark1>distance[j].mark1)||((distance[i].mark1==distance[j].mark1)&&(distance[i].mark2>distance[j].mark2)))
				{
					temp=distance[i];
					distance[i]=distance[j];
					distance[j]=temp;
				}
			}
		}
	for(i=0;i<m;i++)
	{
		cout<<'('<<distance[i].point1[0]<<','<<distance[i].point1[1]<<','<<distance[i].point1[2]<<')';
		cout<<'-';
		cout<<'('<<distance[i].point2[0]<<','<<distance[i].point2[1]<<','<<distance[i].point2[2]<<')';
		printf("=%.2f\n",distance[i].len);
	}
	return 0;
}