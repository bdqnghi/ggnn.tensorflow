unsigned int com[45][2];
float dis[45];
void swap(int i,int j)
{
	unsigned int t_1[2];
	float t_2;
	t_2=dis[i];
	dis[i]=dis[j];
	dis[j]=t_2;
	t_1[0]=com[i][0];
	com[i][0]=com[j][0];
	com[j][0]=t_1[0];
	t_1[1]=com[i][1];
	com[i][1]=com[j][1];
	com[j][1]=t_1[1];
}
int main(void)
{

	int i,j,n,s=0,coord[10][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d ",&coord[i][0],&coord[i][1],&coord[i][2]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			com[s][0]=i;
			com[s][1]=j;
			dis[s]=sqrt(pow(coord[i][0]-coord[j][0],2)+pow(coord[i][1]-coord[j][1],2)+pow(coord[i][2]-coord[j][2],2));
			s++;
		}
	for(i=s;i>0;i--)
		for(j=0;j<i-1;j++)
			if(dis[j]<dis[j+1])
				swap(j,j+1);
	for(i=0;i<s;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",coord[com[i][0]][0],coord[com[i][0]][1],coord[com[i][0]][2],coord[com[i][1]][0],coord[com[i][1]][1],coord[com[i][1]][2],dis[i]);
	fclose(stdin);
	return 0;
}