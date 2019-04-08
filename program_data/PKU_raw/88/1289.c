int main(){
    char aa[100];
    int i;
    i=0;
     gets(aa);
    while(aa[i]!='\0'){
      if(aa[i]<=57&&aa[i]>=48){
      cout<<aa[i];
      if(aa[i+1]>57||aa[i+1]<48)
      cout<<endl;
      }
      i++;
      }
      return 0;
      }
