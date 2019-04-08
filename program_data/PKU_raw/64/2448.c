int point[MAX][3];
double d;
struct {
int x1,x2,y1,y2,z1,z2;
double d;
}dis[DISTANCE],mid;
int n,m=0,i,j;
int main(){
   scanf("%d",&n);
   for(i=0;i<=n-1;i++){
      scanf("%d%d%d",&point[i][0],&point[i][1],&point[i][2]);
   }
   for(i=0;i<=n-2;i++){
	   for(j=i+1;j<=n-1;j++){
	      dis[m].x1=point[i][0];
		  dis[m].x2=point[j][0];
		  dis[m].y1=point[i][1];
		  dis[m].y2=point[j][1];
		  dis[m].z1=point[i][2];
		  dis[m].z2=point[j][2];
dis[m].d=sqrt((dis[m].x1-dis[m].x2)*(dis[m].x1-dis[m].x2)+(dis[m].y1-dis[m].y2)*(dis[m].y1-dis[m].y2)+(dis[m].z1-dis[m].z2)*(dis[m].z1-dis[m].z2));
		  m++;
	   }
   }
   for(i=0;i<=m-1;i++){
	   for(j=0;j<m-1;j++){
		   if(dis[j].d<dis[j+1].d){
			   mid=dis[j];
			   dis[j]=dis[j+1];
			   dis[j+1]=mid;
		   }
	   }
   }
   for(i=0;i<=m-1;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",dis[i].x1,dis[i].y1,dis[i].z1,dis[i].x2,dis[i].y2,dis[i].z2,dis[i].d);
   }
   return 0;
}