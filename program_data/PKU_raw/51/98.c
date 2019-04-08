int main(){
char zfc[520],chu[520][5];
int ps[520],n,m,max[520],s;
memset(zfc,'\0', sizeof(zfc));
memset(chu,'\0',sizeof (chu));
memset(ps,0,sizeof (ps));
memset(max,0,sizeof (max));
scanf("%d",&n);
scanf("%s",zfc);
for (int i=0;i<=strlen(zfc)+1-n;i++){
      m=0;
      for (int j=i;j<i+n;j++){
           chu[i][m]=zfc[j];
           m++;
       }
}
ps[0]=1;
for(int t=1;t<=strlen(zfc)+1-n;t++){
    ps[t]=1;
    for(int k=0;k<t;k++){
      if (ps[k]==0) continue;
      if(strcmp(chu[k],chu[t])==0){
               ps[k]++;
               ps[t]=0;
               break;
      }
    }
}
s=1;
for (int a=1;a<=strlen(zfc)+1-n;a++){
     if(ps[a]>ps[max[0]]){
          max[0]=a;
              for(int y=1;y<=s;y++){
                  max[y]=0;
              }
          s=1;
          continue;
     }
     if(ps[a]==ps[max[0]]){
          s++;
          max[s-1]=a;
     }
 }
if(ps[max[0]]<=1){
      printf("NO");
}
else {
      printf("%d\n",ps[max[0]]);
      for(int c=0;c<s;c++){
          printf("%s\n",chu[max[c]]);
      }
}
return 0;
}