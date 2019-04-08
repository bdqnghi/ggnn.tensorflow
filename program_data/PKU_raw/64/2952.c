int fang(int x,int y)
{
    float z;
    z=(x-y)*(x-y);
    return(z);
}
struct dian
{
       int c;
       int d;
       float e;
       }jl[100],tem;
void main()
{
    struct dian ji[100];
    struct dian tem;
    int fang(int x,int y);
    int a[10][3],n,i,j,k=0;
    for(i=0;i<100;i++){
                       jl[i].c=0;
                       jl[i].d=0;
                       jl[i].e=0;
                       }
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
                     }
    for(i=0;i<n-1;i++){
                     for(j=i+1;j<n;j++){
                                         jl[k].c=i;
                                         jl[k].d=j;
                                         jl[k].e=(float)sqrt(fang(a[i][0],a[j][0])+fang(a[i][1],a[j][1])+fang(a[i][2],a[j][2]));
                                         k++;
                                         }
                     }
    for(j=0;j<k-1;j++){
                       for(i=0;i<k-1-j;i++){
                                            if(jl[i].e<jl[i+1].e){
                                                                  tem=jl[i];
                                                                  jl[i]=jl[i+1];
                                                                  jl[i+1]=tem;
                                                                  }
                                            }
                       }
    for(i=0;;i++){
                  if(jl[i].e==0)
                  break;
                  printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[jl[i].c][0],a[jl[i].c][1],a[jl[i].c][2],a[jl[i].d][0],a[jl[i].d][1],a[jl[i].d][2],jl[i].e);
                  }
}
    
    
    
    
    
                     
                     
