int n,x,y,z;
int p;
struct point
{
    int x,y,z;
}
points[10];

struct print
{
    double l;
    struct point p1,p2;
}
prints[45];
void scan();
void count();
void sort();
void print();
int main(){
    scan();
    count();
    sort();
    print();
    return 0;
}
void scan(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        points[i].x=x;
        points[i].y=y;
        points[i].z=z;
    }
}
void count(){
    int x1,y1,z1,x2,y2,z2;
    p=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            x1=points[i].x;
            y1=points[i].y;
            z1=points[i].z;
            x2=points[j].x;
            y2=points[j].y;
            z2=points[j].z;
            prints[p].l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
            prints[p].p1=points[i];
            prints[p].p2=points[j];
            p++;
        }
    }
}
void sort(){
    struct print temp;
    for(int k=1;k<=p;k++){
        for(int i=0;i<p-k;i++){
            if(prints[i].l<prints[i+1].l){
                temp=prints[i+1];
                prints[i+1]=prints[i];
                prints[i]=temp;
            }
        }
    }
}
void print(){
    int x1,y1,z1,x2,y2,z2;
    double l;
    for(int i=0;i<p;i++){
        x1=prints[i].p1.x;
        y1=prints[i].p1.y;
        z1=prints[i].p1.z;
        x2=prints[i].p2.x;
        y2=prints[i].p2.y;
        z2=prints[i].p2.z;
        l=prints[i].l;
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1,y1,z1,x2,y2,z2,l);
    }
}

