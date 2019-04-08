main()
{
      char str1[251]={0},str2[251]={0},str3[251]={0};
      int i,j,m=0,sum1,sum2,sum3,k,s=0,p=0;
      scanf("%s",str1);
      scanf("%s",str2);
      sum1=strlen(str1);
      sum2=strlen(str2);
      if(sum1>sum2) {sum3=sum1;k=1;}
      else {sum3=sum2;k=2;}
      for(j=1;;j++)
      {
             if(sum1-j<0&&sum2-j<0) break;
             if(sum1-j<0||sum2-j<0) 
             {
                                    if(k==1) str3[sum3-j+1]=str1[sum1-j]-'0'+m;
                                    else str3[sum3-j+1]=str2[sum2-j]-'0'+m;
             }
             else str3[sum3-j+1]=str1[sum1-j]+str2[sum2-j]-'0'-'0'+m;
             m=0;
             if(str3[sum3-j+1]>=10) {
                                  if(j==sum3) s=1;
                                  str3[sum3-j+1]=str3[sum3-j+1]-10;
                                  m=m+1;
                                  }
             str3[sum3-j+1]=str3[sum3-j+1]+'0';
      }
      str3[sum3+1]='\0';
      if(s==1) str3[0]='1';
      for(i=0;i<sum3+1;i++)
      {
      if(p==0) if(str3[i]=='0'||str3[i]=='\0') continue;
      p=1;
      printf("%c",str3[i]);
      }
      if(p==0) printf("0");
      printf("\n");

}
