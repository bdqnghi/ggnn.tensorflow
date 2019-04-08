int main(int argc,char* argv[])
{
   struct point{
float x,y;
}p1[1000];
int i,n,j=0,k,m;
double dis,max1=0,max2=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%f %f",&p1[j].x,&p1[j].y);
j++;
}
for(k=0;k<n;k++){
for(m=0;m<n;m++){
dis=sqrt((p1[k].x-p1[m].x)*(p1[k].x-p1[m].x)+(p1[k].y-p1[m].y)*(p1[k].y-p1[m].y));
if(dis>=max1){
max1=dis;
}
}
if(max1>=max2){
max2=max1;
}
}
printf("%.4f",max2);
return 0;
}