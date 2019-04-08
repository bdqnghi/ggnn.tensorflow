int main(){
double m,sz[100],fm[100],a[100],result[100];
int k,i;
scanf("%lf",&m);
for(k=0;k<m;k++) scanf("%lf",&sz[k]);
for(k=0;k<m;k++){if(sz[k]==1) result[k]=2.000;
                 else {for(i=1;i<=sz[k]+1;i++){fm[1]=1;
                               fm[2]=2;
                               fm[i]=fm[i-1]+fm[i-2];}
                 for(i=1;i<=sz[k];i++) a[i]=fm[i+1]/fm[i];
                 result[k]=0; 
                 for(i=1;i<=sz[k];i++) result[k]+=a[i];
                 } }
for(k=0;k<m;k++) printf("%.3lf\n",result[k]);
return 0;
}