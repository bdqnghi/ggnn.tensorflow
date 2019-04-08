
int main(int argc, char *argv[])
{
    int n,i,b[100],c[100],f[100],sum[100];
    char a[100][50],d[100][1],e[100][1];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s%d%d%s%s%d", a[i], &b[i], &c[i], d[i], e[i], &f[i]);
    }       
    for(i=0;i<n;i++){
        sum[i]=0;
       if((b[i]>80)&&(f[i]>0)){
         sum[i]+=8000;
       }        
       if((b[i]>85)&&(c[i]>80)){
          sum[i]+=4000;
       }
       if(b[i]>90){
          sum[i]+=2000;
       }
       if((b[i]>85)&&(e[i][0]=='Y')){
          sum[i]+=1000;
       }
       if((c[i]>80)&&(d[i][0]=='Y')){
          sum[i]+=850;
       }
    }
    int s=sum[0],j=0,sum1=0;
    for(i=0;i<n;i++){
        if(sum[i]>s){
           s=sum[i];
           j=i;
        }
        sum1+=sum[i];
    }
    printf("%s\n", a[j]);
    printf("%d\n", s);
    printf("%d\n", sum1);
    return 0;
}
