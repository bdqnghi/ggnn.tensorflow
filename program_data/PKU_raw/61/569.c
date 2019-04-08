int fb(int x);
int main(){
    int n,i,b;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                    scanf("%d",&a[i]);                  
    }
    for(i=0;i<n;i++){
                     b=fb(a[i]);
                     printf("%d\n",b);                 
    }
    return 0;                   
}
int fb(int x){
              int y=1,z=1,c,i;
              if(x==1||x==2){
                             c=1;               
              }
              else{
              for(i=2;i<x;i++){
                                c=y+z;
                                y=z;
                                z=c;
                                                  
              }
              }
     return c;         
    }