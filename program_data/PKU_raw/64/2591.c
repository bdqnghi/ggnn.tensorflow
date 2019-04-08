double distance(int xa,int ya,int za,int xb,int yb,int zb);
double distance(int xa,int ya,int za,int xb,int yb,int zb){
    int sum;
    double dis;
    sum=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya)+(zb-za)*(zb-za);
    dis=sqrt(sum);
    return dis;
}

int main(){
    int n,i,t,j,b=0,w=0,te;
    double td;
    scanf("%d",&n);
    struct point{
        int x,y,z;
    }point[10];
    for(i=0;i<n;i++)
    scanf("%d %d %d",&point[i].x,&point[i].y,&point[i].z);
    struct{
        int p,q;
        double dist;
    }temp[45];
    for(i=0;i<45;i++)
    temp[i].dist=-1;
    for(i=0;i<n;i++)
        for(j=0;j<i;j++){
            temp[w].p=i;
            temp[w].q=j;
            temp[w].dist=distance(point[i].x,point[i].y,point[i].z,point[j].x,point[j].y,point[j].z);
            w=w+1;
        }
        
for(i=0;i<45;i++)
    for(w=0;w<44;w++)
        if(temp[w].dist<temp[w+1].dist)
        {
            te=temp[w+1].p;
            temp[w+1].p=temp[w].p;
            temp[w].p=te;
            te=temp[w+1].q;
            temp[w+1].q=temp[w].q;
            temp[w].q=te;    
            td=temp[w+1].dist;
            temp[w+1].dist=temp[w].dist;
            temp[w].dist=td;
        }
        

for(w=0;w<45;w++)

if(temp[w].dist!=-1){
    printf("(%d,%d,%d)-",point[temp[w].q].x,point[temp[w].q].y,point[temp[w].q].z);
    printf("(%d,%d,%d)=",point[temp[w].p].x,point[temp[w].p].y,point[temp[w].p].z);
    printf("%.2lf\n",temp[w].dist);
}
    return 0;
}


