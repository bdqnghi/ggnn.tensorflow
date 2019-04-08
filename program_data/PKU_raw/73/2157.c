int main(){
    int aa[6][6],bb[6],c,dd[6],i,j;
     for(i=1;i<=5;i++){
       bb[i]=0;
       dd[i]=0;
      for(j=1;j<=5;j++){
       cin>>aa[i][j];
       }
       }
for(i=1;i<=5;i++){
     bb[i]=aa[i][1]; 
  for(j=2;j<=5;j++){
     if(aa[i][j]>=bb[i])
       bb[i]=aa[i][j];
       }
       }
for(i=1;i<=5;i++){
     dd[i]=aa[1][i]; 
  for(j=2;j<=5;j++){
     if(aa[j][i]<=dd[i])
       dd[i]=aa[j][i];
       }
       }   
       c=0;   
for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
    if(bb[i]==dd[j]){
    cout<<i<<" "<<j<<" "<<bb[i];
        c=1;
}
}
}
     if(c==0)
     cout<<"not found";
    return 0;
}