 int main(){
 int n;
 scanf("%d",&n);
 char zfc[n+2][n+2],temp[n+2][n+2];
 int a,b,s=0;
 for(a=1;a<n+1;a++){
     scanf("%*c");
     for(b=1;b<n+1;b++){
         scanf("%c",&zfc[a][b]);
     }
 }
 for(a=0;a<n+2;a++){
    zfc[a][0]='#';
    zfc[a][n+1]='#';
 }
 for(b=1;b<n+1;b++){
     zfc[0][b]='#';
     zfc[n+1][b]='#';
 }
 int m;
 scanf("%d",&m);
 for( int i=1;i<m;i++){
     for(a=0;a<n+2;a++){
         for(b=0;b<n+2;b++){
             temp[a][b]=zfc[a][b];
         }
     }
     for(a=1;a<n+1;a++){
         for(b=1;b<n+1;b++){
             if(temp[a][b]=='@'){
                 if(temp[a-1][b]=='.'){
                     zfc[a-1][b]='@';
                 }if(temp[a+1][b]=='.'){
                     zfc[a+1][b]='@';
                 }if(temp[a][b+1]=='.'){
                     zfc[a][b+1]='@';
                 }if(temp[a][b-1]=='.'){
                     zfc[a][b-1]='@';
                 }
             }
         }
     }
 }for(a=1;a<n+1;a++){
     for(b=1;b<n+1;b++){
         if(zfc[a][b]=='@'){
             s++;
         }
     }
 }
printf("%d",s);
return 0;
}