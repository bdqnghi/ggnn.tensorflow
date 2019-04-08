int main()
{
int a[5][5],s,max[5],min[5];
s=0;
for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
                scanf("%d",&a[i][j]);
                }
             }
max[0]=a[0][0];
max[1]=a[1][0];
max[2]=a[2][0];
max[3]=a[3][0];
max[4]=a[4][0];
min[0]=a[0][0];
min[1]=a[0][1];
min[2]=a[0][2];
min[3]=a[0][3];
min[4]=a[0][4];
for(int i=0;i<5;i++){
          for(int j=0;j<5;j++){
if(a[i][j]>max[i]){
                   max[i]=a[i][j];
                   }
                   if(a[i][j]<min[j]){
                   min[j]=a[i][j];
                   }
             }            
             } 
for(int i=0;i<5;i++){
          for(int j=0;j<5;j++){
                  if(a[i][j]==max[i]&&a[i][j]==min[j]){
                  printf("%d %d %d\n",i+1,j+1,a[i][j]);                  
                                                       }
                  else{
                     s++;  
                       }
                  }
                  }   
if(s==25){
          printf("not found");
          }          
return 0;
}
