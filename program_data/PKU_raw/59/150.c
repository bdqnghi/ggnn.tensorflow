int main(){
  int n,i,j,k,l;
  char aa[1000][1000];
  int m;
  cin>>n;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     cin>>aa[i][j];
   cin>>m;
  for(k=1;k<m;k++){
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         if(aa[i][j]=='$')
               aa[i][j]='@';
      }
    }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
     if(aa[i][j]=='@'){
          if((i-1>=0)&&(aa[i-1][j]=='.'))
              aa[i-1][j]='$';

           if((i+1<=n-1)&&(aa[i+1][j]=='.'))
              aa[i+1][j]='$';

              if((j-1>=0)&&(aa[i][j-1]=='.'))
              aa[i][j-1]='$';

               if((j+1<=n-1)&&(aa[i][j+1]=='.'))
              aa[i][j+1]='$';
}
}
}
}
    l=0;
       for(i=0;i<n;i++){
        for(j=0;j<n;j++){
      if(aa[i][j]=='@'||aa[i][j]=='$'){
          l++; 
}
}
}
  cout<<l<<endl;
return 0;
}  
