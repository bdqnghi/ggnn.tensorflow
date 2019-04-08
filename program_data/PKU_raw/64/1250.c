struct dir{
	int dot1[3];
	int dot2[3];
	float dis;
	
} dir[50];
struct dir temp;
int num[30];
int dot[50][3];
int n,i,j,p=0,a,b;
int main()
{
	
	scanf("%d",&n);
	
	for(i=1;i<=3*n;i++)
	{
		scanf("%d",&num[i]);
		if(i%3!=0)
		{
			a=i/3;
		    b=i%3-1;
			dot[a][b]=num[i];
		}
		else dot[i/3-1][2]=num[i];
	} 

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dir[p].dot1[0]=dot[i][0];dir[p].dot1[1]=dot[i][1];dir[p].dot1[2]=dot[i][2];
			dir[p].dot2[0]=dot[j][0];dir[p].dot2[1]=dot[j][1];dir[p].dot2[2]=dot[j][2];
			dir[p].dis=sqrt((dot[i][0]-dot[j][0])*(dot[i][0]-dot[j][0])+(dot[i][1]-dot[j][1])*(dot[i][1]-dot[j][1])+(dot[i][2]-dot[j][2])*(dot[i][2]-dot[j][2]));
			p++;
		}
	}
	
	for(i=1;i<p;i++)
	{
		for(j=0;j<p-i;j++)
			
		{
			if(dir[j].dis<dir[j+1].dis)
			{
				temp=dir[j];
				dir[j]=dir[j+1];
				dir[j+1]=temp;
			}
		}
	}
	for(i=0;i<p;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dir[i].dot1[0],dir[i].dot1[1],dir[i].dot1[2],dir[i].dot2[0],dir[i].dot2[1],dir[i].dot2[2],dir[i].dis);
	}
	return 0;
}

			



 




	
	


