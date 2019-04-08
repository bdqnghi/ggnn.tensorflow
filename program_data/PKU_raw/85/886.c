int main(){
    int n,j,i,g;
    cin>>n;
    int bb[n+1];
    char aa[n+1][100];
    for(i=1;i<=n;i++){
    cin>>aa[i];
    g=0;
    if(!(aa[i][0]=='_'||aa[i][0]<=122&&aa[i][0]>=97||aa[i][0]<=90&&aa[i][0]>=65)){
         g=1;
         }
    else {
         j=1;
         while(aa[i][j]!='\0'){
           if(!(aa[i][j]=='_'||aa[i][j]<=122&&aa[i][j]>=97||aa[i][j]<=90&&aa[i][j]>=65||aa[i][j]<=57&&aa[i][j]>=48)){
            g=1;
            break;
            }
            j++;
            }
            }
         bb[i]=g;
         }
    for(i=1;i<=n;i++){
     if(bb[i]==1)
     cout<<"no"<<endl;
     else cout<<"yes"<<endl;
     }
   
     return 0;
     }