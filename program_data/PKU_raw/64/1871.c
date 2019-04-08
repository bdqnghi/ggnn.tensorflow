
int main(){

int n,i,j,k=0,Nline,dx,dy,dz;
scanf("%d",&n);     //??????

struct Dot{
int x,y,z;
} dots[n];          //????,????????

Nline=n*(n-1)/2;      //??????(????????)

for(i=0;i<n;i++)
{
    scanf("%d %d %d",&dots[i].x,&dots[i].y,&dots[i].z);    //??????
}

struct Line{
int x1,y1,z1;
int x2,y2,z2;
float dist;
} lines[Nline],temp;        //???????????-???????????

for(i=0;i<n;i++){           //??????
    for(j=(i+1);j<n;j++)
    {
        lines[k].x1=dots[i].x;
        lines[k].y1=dots[i].y;
        lines[k].z1=dots[i].z;
        lines[k].x2=dots[j].x;
        lines[k].y2=dots[j].y;
        lines[k].z2=dots[j].z;

        dx=lines[k].x1-lines[k].x2;
        dy=lines[k].y1-lines[k].y2;
        dz=lines[k].z1-lines[k].z2;
        lines[k].dist=sqrt(dx*dx+dy*dy+dz*dz);

        k++;
    }
}


for(i=0;i<Nline-1;i++)//??Nline?
{
    for(j=0;j<Nline-i;j++)
    {
        if(lines[j].dist<lines[j+1].dist)
        {
            temp=lines[j];
            lines[j]=lines[j+1];
            lines[j+1]=temp;
        }
    }
}

for(i=0;i<Nline;i++)
{
  printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",lines[i].x1,lines[i].y1,lines[i].z1,lines[i].x2,lines[i].y2,lines[i].z2,lines[i].dist);
 // printf("%d",i);
}





return 0;
}



