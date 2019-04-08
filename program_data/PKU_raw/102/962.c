int main() {
int n,i,nan=0,nv=0,j;
double h[40],h1[40],h2[40],e;
char a[40][7];
scanf("%d",&n);
for (i=0;i<n;i++) {
    scanf("%s %lf",a[i],&h[i]);
    for (j=0;j<10;j++){
        if (a[i][j]=='f') {
        h1[nv]=h[i];
        nv++;
        break;
        } else if (a[i][j]=='m') {
           h2[nan]=h[i];
           nan++;
           break;
                      }
                      }
                      }
        for (i=0;i<nan;i++) {
            for (j=0;j<nan-i-1;j++) {
                if (h2[j]>h2[j+1]) {
                            e=h2[j];
                            h2[j]=h2[j+1];
                            h2[j+1]=e;
                            }
                            }
                            }  
       for (i=0;i<nv;i++) {
            for (j=0;j<nv-i-1;j++) {
                if (h1[j]<h1[j+1]) {
                            e=h1[j];
                            h1[j]=h1[j+1];
                            h1[j+1]=e;
                            }
                            }
                            } 
                 for (i=0;i<nan;i++) {
                  printf("%.2lf ",h2[i]);
                  }            
                  
                     for (i=0;i<nv-1;i++) {
                  printf("%.2lf ",h1[i]);
                  }
                  printf("%.2lf",h1[nv-1]);                                        
                     
    



             return 0;
            
             }
             



