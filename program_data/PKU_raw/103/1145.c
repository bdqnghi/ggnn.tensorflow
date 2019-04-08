main()
{
      char a[1000]={""};
      int num=1;
      int i,N;
      gets(a);
      N=strlen(a);
      i=0;
      do{
         if(a[i]==a[i+1]||a[i]-a[i+1]==32||a[i]-a[i+1]==-32)
          {
              num++;
              i++;
          }
          else
          {
              if(a[i]>'Z'){
                           a[i]=a[i]-32;
                           }
              printf("(%c,%d)",a[i],num);
              num=1;
              i++;
          }
          }
         while(i<N);
      
}
