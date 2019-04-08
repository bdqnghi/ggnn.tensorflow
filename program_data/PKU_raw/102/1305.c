main()
{
      struct photo
      {
             double high;
             char sex[10];
      }p[43];
      int n,i,i2,j=0,k=0;
      double man[43],woman[43],hehe;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%s%lf",p[i].sex,&(p[i].high));
      for(i=0;i<n;i++)
          if(strcmp(p[i].sex,"male")==0) {man[j]=p[i].high;j++;}
          else  {woman[k]=p[i].high;k++;}
      for(i=j-2;i>=0;i--)
          for(i2=0;i2<=i;i2++)
              if(man[i2]>man[i2+1]) {hehe=man[i2+1];man[i2+1]=man[i2];man[i2]=hehe;}
      for(i=k-2;i>=0;i--)
          for(i2=0;i2<=i;i2++)
              if(woman[i2]<woman[i2+1]) {hehe=woman[i2+1];woman[i2+1]=woman[i2];woman[i2]=hehe;}
      for(i=0;i<j;i++)
      printf("%.2f ",man[i]);
      for(i=0;i<k-1;i++)
      printf("%.2f ",woman[i]);
      printf("%.2f",woman[i]);
}
