int main(){
    int n,i,j;
    cin>>n;
    int aa[n+100][60],bb[n+100];
    for(i=1;i<=n;i++){
     cin>>aa[i][0];
     if(aa[i][0]==0)
       bb[i]=60;
       else{
      for(j=1;j<=aa[i][0];j++)
         cin>>aa[i][j];
         j--;
         if(aa[i][j]+3*j<60)
         bb[i]=60-j*3;
         else{   
                 for(j=1;j<=aa[i][0];j++){
                 if(aa[i][j]+3*j>63){
                     bb[i]=63-j*3;
                     break;
                     }
                  if(aa[i][j]+3*j>=60&&aa[i][j]+3*j<=63)
                   { bb[i]=aa[i][j];
                    break;
                    }
                    }
                    }
                    }
                    }
         for(i=1;i<=n;i++)
         cout<<bb[i]<<endl;
             return 0;
         }
               