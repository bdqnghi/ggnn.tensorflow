int htr(int h);
int main()
{
    int n,i,j,m=0,f=0;
    double mh[41],fh[41],h,e;
    char fm[7];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%lf",&fm,&h);
        if(fm[0]=='f'){
           fh[f]=h;
           f++;
           }
        else {
           mh[m]=h;
           m++;
           }
        }
     for(i=(m-1);i>0;i--){
        for(j=0;j<i;j++){
            if(mh[j]>mh[j+1]){
               e=mh[j];
               mh[j]=mh[j+1];
               mh[j+1]=e;
               }
            }
        }
     for(i=(f-1);i>0;i--){
        for(j=0;j<i;j++){
            if(fh[j]<fh[j+1]){
               e=fh[j];
               fh[j]=fh[j+1];
               fh[j+1]=e;
               }
            }
        }
     for(i=0;i<m;i++)printf("%.2lf ",mh[i]);
     for(i=0;i<(f-1);i++)printf("%.2lf ",fh[i]);
     printf("%.2lf",fh[f-1]);
     return 0;
}