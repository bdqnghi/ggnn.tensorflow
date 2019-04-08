struct dian{
float x;
float y;
float z;
};
struct diandui{
struct dian a;
struct dian b;
float dis;
};
void main(){
   int n,i,j,t=0;
   struct dian d[10];
   struct diandui dui[50],temp;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%f%f%f",&d[i].x,&d[i].y,&d[i].z);
   }
   for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            dui[t].a=d[i];
            dui[t].b=d[j];
            //printf("%f %f",d[i].x,d[j].x);
            dui[t].dis=sqrt((d[i].x-d[j].x)*(d[i].x-d[j].x)+(d[i].y-d[j].y)*(d[i].y-d[j].y)+(d[i].z-d[j].z)*(d[i].z-d[j].z));
            //printf("%.2f\n",dui[t].dis);
            t++;
        }
   }
   for(i=0;i<t;i++){
        for(j=0;j<t-1-i;j++){
            if(dui[j].dis<dui[j+1].dis){
                temp=dui[j];
                dui[j]=dui[j+1];
                dui[j+1]=temp;
            }
        }
   }
   for(i=0;i<t;i++){
        printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",dui[i].a.x,dui[i].a.y,dui[i].a.z,dui[i].b.x,dui[i].b.y,dui[i].b.z,dui[i].dis);
   }
}
