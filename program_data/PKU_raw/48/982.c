int main()
{
int m,n;
int a[9][9],b[9][9];
scanf("%d %d",&m,&n);
for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                a[i][j]=0;
                b[i][j]=0;
                                  }
                 }
  a[4][4]=m;
for(int k=0;k<n;k++){ for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
               if(a[i][j]!=0){
               b[i-1][j]+=a[i][j];
               b[i+1][j]+=a[i][j];
               b[i][j-1]+=a[i][j];
               b[i][j+1]+=a[i][j];
               b[i-1][j-1]+=a[i][j];
               b[i+1][j+1]+=a[i][j];
               b[i-1][j+1]+=a[i][j];
               b[i+1][j-1]+=a[i][j];
                b[i][j]+=2*a[i][j];
                }
                 }
                 }
                 for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                        a[i][j]=b[i][j];
                        b[i][j]=0;
                        }
                        }
                 }
  for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
    if(j!=8) {
                printf("%d ",a[i][j]);
                }
    else{
          printf("%d\n",a[i][j]);
         }
        }
        }
int hou;
scanf("%d",&hou);
return 0;
}
