int point[10][3]={{0}};
float dis[10][10]={{0}};
float far[45]={0};

void bubblesort(int k)
{
	for (int i=0;i<=k-1;i++)
	{
		for (int j=k;j>i;j--)
		{
			float tmp;
			if (far[j]>far[j-1])
			{
				tmp=far[j];
				far[j]=far[j-1];
				far[j-1]=tmp;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<=n-1;i++)
	{
		cin>>point[i][0]>>point[i][1]>>point[i][2];
	}
	int k=0;
	for (int i=0;i<=n-2;i++)
	{
		for (int j=i+1;j<=n-1;j++)
		{
			dis[i][j]=sqrt((float)( (point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2])));
			far[k]=dis[i][j];
			k++;
		}
	}
	bubblesort(k);
	for (int p=0;p<=k-1;)
	{
	for (int i=0;i<=n;i++)
	{
		for (int j=i;j<=n-1;j++)
		{
			if (dis[i][j]==far[p])
			{
				cout<<"("<<point[i][0]<<","<<point[i][1]<<","<<point[i][2]<<")-("<<point[j][0]<<","<<point[j][1]<<","<<point[j][2]<<")=";
				printf("%.2f\n",far[p]);
				dis[i][j]=-1;
				goto loop;
			}
		}
	}
loop:p++;
	}
}
