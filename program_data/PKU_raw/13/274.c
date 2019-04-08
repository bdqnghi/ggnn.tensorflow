
main(){
       int input[20000],output[20000],n,i,j,outLen=1;
       scanf("%d",&n);
       for(i=0;i<n;i++){
           scanf("%d",&input[i]);
           output[outLen]=input[i];
           for(j=1;j<outLen;j++){
               if(input[i]==output[j]) outLen=outLen-1;
               /*else output[outLen]=input[i]; */
               
           }
           outLen=outLen+1;
       }
       
       for(i=1;i<outLen;i++){
           printf("%d",output[i]);
           if(i!=outLen-1) printf(" ");
       }
       
}