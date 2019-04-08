int main()
{
    int n;
    float distance[150];
    int k=1;
    int i=1,j=1,t=1;
    double temp; 
    struct point
    {
           int x,y,z;
    }
    stu1[12];
    struct ttt
    {
           int x1,y1,z1;
           int x2,y2,z2;
    }
    stu2[150];       
    scanf("%d",&n);
  for(i=1;i<=n;i++)
    scanf("%d %d %d",&stu1[i].x,&stu1[i].y,&stu1[i].z);
  for(i=1;i<=n-1;i++)
    {
    for(j=i+1;j<=n;j++)
      {
      distance[k]=(float)sqrt((stu1[i].x-stu1[j].x)*(stu1[i].x-stu1[j].x)+(stu1[i].y-stu1[j].y)*(stu1[i].y-stu1[j].y)
                  +(stu1[i].z-stu1[j].z)*(stu1[i].z-stu1[j].z));
                  stu2[k].x1=stu1[i].x;
                  stu2[k].y1=stu1[i].y;
                  stu2[k].z1=stu1[i].z;
                  stu2[k].x2=stu1[j].x;
                  stu2[k].y2=stu1[j].y;
                  stu2[k].z2=stu1[j].z;
                  k++;//k=0--k=n-1*n-2/2
      }
    }
    t=k-1;//eg:n=4 k=7 t=6
     for(j=0;j<=t-1;j++)//????
     {
    for(i=1;i<=t-j;i++)
     {
     if(distance[i]<distance[i+1])
       {
       temp=distance[i];
       distance[i]=distance[i+1];
       distance[i+1]=temp;
       
       temp=stu2[i].x1;
       stu2[i].x1=stu2[i+1].x1;
       stu2[i+1].x1=temp;
      
       temp=stu2[i].y1;
       stu2[i].y1=stu2[i+1].y1;
       stu2[i+1].y1=temp;
       
       temp=stu2[i].z1;
       stu2[i].z1=stu2[i+1].z1;
       stu2[i+1].z1=temp;
       
       temp=stu2[i].x2;
       stu2[i].x2=stu2[i+1].x2;
       stu2[i+1].x2=temp;
      
       temp=stu2[i].y2;
       stu2[i].y2=stu2[i+1].y2;
       stu2[i+1].y2=temp;
       
       temp=stu2[i].z2;
       stu2[i].z2=stu2[i+1].z2;
       stu2[i+1].z2=temp;
       
       
       }
       }
     } 
     for(k=1;k<=t;k++)
      printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",stu2[k].x1,stu2[k].y1,stu2[k].z1,stu2[k].x2,stu2[k].y2,stu2[k].z2,distance[k]);
        return 0;
} 
      
                         
                       
    
    
           