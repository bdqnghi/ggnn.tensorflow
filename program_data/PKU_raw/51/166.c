main()
{
      int n,i,j,len;
      char a[600],c;
      scanf("%d",&n);
      scanf("%c",&c);
      scanf("%s",a);
      len=strlen(a);
      char b[600][5]={0};
      int outcome[600]={0};
      for(i=0;i<=len-n;i++)
      {
                           for(j=0;j<=n-1;j++)
                           {
                                              b[i][j]=a[i+j];
                           }
                           for(j=n;j<=5;j++) b[i][j]=0;
                           
      }//??len-n+1?n-gram
      for(i=0;i<=len-n;i++)
      {
                           outcome[i]=1;
                           for(j=i+1;j<=len-n;j++)
                           if(strcmp(b[i],b[j])==0) outcome[i]+=1;
      }
      int max=0;
      for(i=0;i<=len-n;i++)
      if(outcome[i]>max) max=outcome[i];
      if(max==1) printf("NO");
      else
      {
      printf("%d\n",max);
      for(i=0;i<=len-n;i++)
      {
                           if(outcome[i]==max) printf("%s\n",b[i]);
      }
      }

      

}
      