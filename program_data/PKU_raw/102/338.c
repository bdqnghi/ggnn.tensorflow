struct play
{
       char sex[10];
       double h; 
};

main()
{
      int n,i,j;
      double t; 
      scanf("%d",&n);
      struct play ab[n];
      for(int i=0;i<n;i++)
      {
              scanf("%s %lf",ab[i].sex,&ab[i].h); 
      } 
      int ma=0;
      int fe=0;
      double nan[50];
      double nv[50];
      for(i=0;i<50;i++)
      {
                       nan[i]=1.0;
                       nv[i]=1.0; 
      } 
      for(i=0;i<n;i++)
      {
                      if(strcmp(ab[i].sex,"male")==0)
                      {nan[ma]=ab[i].h;
                      ma++;}
                      if(strcmp(ab[i].sex,"female")==0)
                      { 
                      nv[fe]=ab[i].h;
                      fe++; 
                      }           
      } 
     
      
      for(j=0;j<ma-1;j++)
      {
                for(i=0;i<ma-1-j;i++)
                if(nan[i]>nan[i+1])
                {
                                   t=nan[i];
                                   nan[i]=nan[i+1];
                                   nan[i+1]=t; 
                }      
      }
        for(j=0;j<fe-1;j++)
      {
                for(i=0;i<fe-1-j;i++)
                if(nv[i]<nv[i+1])
                {
                                   t=nv[i];
                                   nv[i]=nv[i+1];
                                   nv[i+1]=t; 
                }      
      }
      for(i=0;i<ma;i++)
      printf("%.2lf ",nan[i]);
      for(i=0;i<fe-1;i++)
      printf("%.2lf ",nv[i]);
      printf("%.2lf",nv[fe-1]); 
      
       
} 
