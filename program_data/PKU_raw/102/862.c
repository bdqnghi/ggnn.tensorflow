int main()
{
int n,i,j,k,male,female;
double t;
char xingbie[50][10];
double shengao[50],nan[50],nv[50];
scanf("%d",&n);
for(j=0;j<n;j++){
                  scanf("%s",xingbie[j]);
                  scanf("%lf",&shengao[j]);
                  }
i=0;
k=0;
for(j=0;j<n;j++){
                 if(xingbie[j][0]=='m'){
                                        nan[i]=shengao[j];
                                        i++;
                                        }
                 else{
                      nv[k]=shengao[j];
                      k++;
                      }
                 }
male=i;
female=k;
for(i=0;i<male-1;i++){
                 for(j=0;j<male-i-1;j++){
                                     if(nan[j]>nan[j+1]){
                                                         t=nan[j];
                                                         nan[j]=nan[j+1];
                                                         nan[j+1]=t;
                                                         }
                                     }
                 }
 for(i=0;i<female;i++){
                 for(j=0;j<female-i-1;j++){
                                     if(nv[j]>nv[j+1]){
                                                         t=nv[j];
                                                         nv[j]=nv[j+1];
                                                         nv[j+1]=t;
                                                         }
                                     }
                 }
 for(i=0;i<male;i++){printf("%.2lf ",nan[i]);}
 for(i=female-1;i>0;i--){printf("%.2lf ",nv[i]);}
 printf("%.2lf",nv[0]);

return 0;
}
