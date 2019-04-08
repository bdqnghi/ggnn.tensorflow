struct node {
       int x,y,z;
}p[10];
struct edge{
       int node1,node2;
       double dis;
}t[100];
double dist(int a,int b)
{
       return sqrt((p[a].x-p[b].x)*(p[a].x-p[b].x)+(p[a].y-p[b].y)*(p[a].y-p[b].y)+(p[a].z-p[b].z)*(p[a].z-p[b].z));
}
int judge(int x,int y)
{
     if (t[x].node1<t[y].node1 || (t[x].node1==t[y].node1 && t[x].node2<t[y].node2))
		 return 0;
     else return 1;
}
int main()
{
    int n,l=0,a,b,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++) scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
    for (i=0;i<n;i++)
	{
        for (j=i+1;j<n;j++)
		{
            l++; 
			t[l].dis=dist(i,j);
			t[l].node1=i;
			t[l].node2=j;
            }
    }
    for (i=1;i<=l;i++)
	{
        for (j=i+1;j<=l;j++)
		{
            if (t[i].dis<t[j].dis || (t[i].dis==t[j].dis && judge(i,j)))
			{
               t[56]=t[i];
			   t[i]=t[j];
			   t[j]=t[56];
            }
        }
    }
    for (i=1;i<=l;i++)
	{
         a=t[i].node1;
		b=t[i].node2;
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",p[a].x,p[a].y,p[a].z,p[b].x,p[b].y,p[b].z,t[i].dis);
    }
    return 0;
}
