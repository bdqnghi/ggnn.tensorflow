int main(){
int sz[5][5],i,j,a,x=5,y=5,m=0,n=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    scanf("%d",&(sz[i][j]));
    }


}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        for(a=0;a<5;a++){
            if(a!=j){
            
                if(sz[i][j]>sz[i][a]){        
                   m=m+1;
                }
               

            }
            
            if(a!=i){
            
                if(sz[i][j]<sz[a][j]){
                n=n+1;
                
                }
                
            
            }

            
            
        }
    
        if((m==4)&&(n==4)){
            x=i+1;
            y=j+1;
        }
        else{m=0;n=0;}
    
    }


}

if(x==5){
printf("not found");
}
else{
printf("%d %d %d",x,y,sz[x-1][y-1]);
}
return 0;

}
