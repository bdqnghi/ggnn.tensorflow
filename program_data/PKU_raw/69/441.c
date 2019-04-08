main()
{
      int n1,n2,i,j=0,k,a,b;
      char str1[252],str2[252],str3[252];
      scanf("%s",str1);
      scanf("%s",str2);
      if(str1[0]=='0'&&str1[1]=='\0')printf("%s",str2);
      else{
      for(a=0;a<250;a++){
      if(str1[a]=='0'){
      for(i=0;i<250;i++)
      str1[i]=str1[i+1];}
      else break;}
      for(a=0;a<250;a++){
      if(str2[a]=='0'){
      for(i=0;i<250;i++)
      str2[i]=str2[i+1];}
      else break;}
      n1=strlen(str1);
      n2=strlen(str2);
      if(n1>n2){
      for(i=1;(n1-i)>=0;i++){
      if(n2-i<0)b=48;
      else b=str2[n2-i];
      if((str1[n1-i]+b+j)<=105){
      str3[n1-i]=str1[n1-i]+b-48+j;
      j=0;}
      else{str3[n1-i]=str1[n1-i]+b-58+j;
      j=1;}}
      if(j==1){
      for(k=0;n1-k>0;k++)
      str3[n1-k]=str3[n1-k-1];
      str3[0]=49;
      str3[n1+1]='\0';}
      else str3[n1]='\0';
      printf("%s",str3);
      }
      else{
      for(i=1;(n2-i)>=0;i++){
      if(n1-i<0) b=48;
      else b=str1[n1-i];
      if((str2[n2-i]+b+j)<=105){
      str3[n2-i]=str2[n2-i]+b-48+j;
      j=0;}
      else{str3[n2-i]=str2[n2-i]+b-58+j;
      j=1;}}
      if(j==1){
      for(k=0;n2-k>0;k++)
      str3[n2-k]=str3[n2-k-1];
      str3[0]=49;
      str3[n2+1]='\0';}
      else str3[n2]='\0';
      printf("%s",str3);
      }}
}