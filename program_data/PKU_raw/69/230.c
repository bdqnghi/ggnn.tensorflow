int main(){
    char a[255],b[255];
    int n,m,i,j,x,y,z,k=0;
    int c[255]={0};
    scanf("%s",a);
    scanf("%s",b);
    m=strlen(a);
    n=strlen(b);
    x=m-1;
    y=n-1;
    while(1){
             if(x<0&&y<0){break;}
             if(x>=0&&y>=0){
                          c[k]=a[x]-'0'+b[y]-'0';
                          k++;
                          x--;
                          y--;
             }
             if(x>=0&&y<0){
                          c[k]=a[x]-'0';
                          k++;
                          x--;
                          y--;             
             }
             if(x<0&&y>=0){
                          c[k]=b[y]-'0';
                          k++;
                          x--;
                          y--;             
             }                   
    }
     for(i=0;i<k-1;i++){
                      z=c[i];
                      c[i]=z%10;
                      c[i+1]+=z/10;                                  
    }
     if(c[k-1]>10){
                z=c[k-1];
                c[k-1]=z%10;
                printf("%d",(z/10));            
    }
    for(i=k-1;i>=0;i--){
                        if(c[i]!=0||k==1){break;}
                        if(c[i]==0){k--;}                                                           
    }
    for(i=k-1;i>=0;i--){
                        printf("%d",c[i]); 
    }                       

    return 0;    
}