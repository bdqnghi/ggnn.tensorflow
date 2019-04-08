int bonus[1002],index=0;
int main()
{
	void f(int x[2][1002],int y);
	int n,flag=1,a[2][1002];
	while(flag==1)
	{
		scanf("%d",&n);
		if(n!=0) { f(a,n);index++;}//?????????????
		else flag=0;
	}
	for(int i=0;i<index;i++)
		printf("%d\n",bonus[i]);
}
void f(int x[2][1002],int y)
{
	int i,j,k,win,draw,flag,b[1002]={0},max,num=0;
	for(i=0;i<2;i++)
		for(j=0;j<y;j++)
			scanf("%d",&x[i][j]);
	for(i=0;i<y-1;i++)//?????????????
		for(j=1;i+j<y;j++)
		if(x[0][i]<x[0][i+j])       
			{k=x[0][i];
	         x[0][i]=x[0][i+j];
			 x[0][i+j]=k;}
	for(i=0;i<y-1;i++)//??????
		for(j=1;i+j<y;j++)
		if(x[1][i]<x[1][i+j])       
			{k=x[1][i];
	         x[1][i]=x[1][i+j];
			 x[1][i+j]=k;}
	flag=1;
	for(i=0;i<y&&flag==1;i++)  //????????????????????????????????????
	{if(x[0][0]>x[1][i]||x[0][0]==x[1][i]) {k=i;flag=0;}}
	if(flag==1) max=y*(-200);
	else 
	{
		while (k<=y-1)
		{
				win=0;
				draw=0;
				for(i=0,j=k;i<y&&j<y;i++,j++)
				{	
					if(x[0][i]>x[1][j]) win++;
					else if (x[0][i]==x[1][j]) draw++;
				}
				b[num++]=win*200-(y-draw-win)*200;//??????????????
				k++;
		}
	max=b[0];
	for(i=0;i<num;i++)
	if(max<b[i]) max=b[i];
	}
     bonus[index]=max;//??????????????????????????
}