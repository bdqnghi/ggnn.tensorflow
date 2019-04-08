

int main(int argc, char *argv[])
{
    char ary[500]; static char separy[500][5];
    int n,i,j,k;   char *ptr;
    int len;       ptr= ary;
    scanf("%d\n",&n);
    gets(ary);     len= strlen(ary);
    for(i=0; i<len+1-n; i++){
             for(j=0; j<n;j++){
                   separy[i][j]= ary[i+j];
             }
    }
    static int tong[500];               int x,y;
    for(k=len-n; k>=0; k--){
                for(x=k+1 ;x<len+1-n ;x++){
                        if( strcmp(separy[x], separy[k])==0 ){
                            tong[k]++;
                        }
                }
    }
    int max=0;   int fitgru[10];
    int fitcount=0;
    for(y=0; y<10; y++){fitgru[y] = -1;}
    int al,be;
    for(al=0; al<len+1-n; al++){
              if(tong[al]!=0){
                      if(tong[al] > max){
                                  max= tong[al];
                                  fitgru[0]= al;
                                  fitcount =1;
                      }
                      else if(tong[al] == max){
                                  fitgru[fitcount++]= al;
                      }
              }
    }
    if(max){
            cout << max+1 << endl;
            for(i=0; i< fitcount; i++){
                     cout << separy[fitgru[i]] << endl;
            }
    }
    else{
         cout <<"NO";
    }         
             
    
   
    return EXIT_SUCCESS;
}
