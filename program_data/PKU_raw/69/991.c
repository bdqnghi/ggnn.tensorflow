int main(){
    char aa[1000],bb[1000],cc[1000],dd[1000];
    int i=0,j=0,k;
    cin>>aa>>bb;
    while(aa[i]!='\0')
    i++;
    while(bb[j]!='\0')
    j++;
    if(i<j){                               
    k=i;
    i=j;
    j=k;
    strcpy(dd,aa);
    strcpy(aa,bb);
    strcpy(bb,dd);
    }      
                     
    for(k=1;k<=i;k++){
        if(k<=j){
        if(aa[i-k]+bb[j-k]-48>57){          
        cc[i+1-k]=aa[i-k]+bb[j-k]-58;
        if(k!=i)
        aa[i-k-1]++;
        else cc[0]='1';
        }
        else {cc[i+1-k]=aa[i-k]+bb[j-k]-48;
              if(k==i)
              cc[0]=0;
        }
        }
      else {
           if(aa[i-k]>57)
          { cc[i-k+1]=aa[i-k]-10;
           if(k!=i)
           aa[i-k-1]++;
           else cc[0]='1'; 
           }
           else {
                cc[i-k+1]=aa[i-k];
                 if(k==i)
                 cc[0]='0';
           }
           }
           }
          j=0;
           while((cc[j]<=48||cc[j]>57)&&j<i){
           j++;
           }
         for(k=j;k<=i;k++)
           cout<<cc[k];
           cout<<endl;
           
                   return 0;
}
