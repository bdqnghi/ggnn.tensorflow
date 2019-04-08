int main()
{
	int a[10][3],m,i,j,k=0,dis[100][2],b[100],temp,x,y,z;
	double distance[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			x=a[i][0]-a[j][0];
			y=a[i][1]-a[j][1];
			z=a[i][2]-a[j][2];
			temp=pow(x,2)+pow(y,2)+pow(z,2);
			distance[k]=sqrt(temp);
			b[k]=k;
			dis[k][0]=i;
			dis[k][1]=j;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(distance[b[i]]<distance[b[j]])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
			else if(distance[b[i]]==distance[b[j]])
			{
				if(dis[b[i]][0]>dis[b[j]][0])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
				else if(dis[b[i]][0]==dis[b[j]][0]&&dis[b[i]][1]>dis[b[j]][1])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[dis[b[i]][0]][0],a[dis[b[i]][0]][1],a[dis[b[i]][0]][2],a[dis[b[i]][1]][0],a[dis[b[i]][1]][1],a[dis[b[i]][1]][2],distance[b[i]]);
	}
	return 0;
}