main()
{
      int i,j,n,flag=1;
      char **p;
      scanf("%d\n",&n);
      p=(char **)malloc(n*sizeof(char *));
      for(i=0;i<n;i++)
      {
           p[i]=(char *)malloc(81*sizeof(char));           
      }
      for(i=0;i<n;i++)
      {
           gets(p[i]);           
      }
      for(i=0;i<n;i++)
      {
           if(!(p[i][0]=='_'||(p[i][0]>='a'&&p[i][0]<='z')||(p[i][0]>='A'&&p[i][0]<='Z')))                    
                       flag=0;
           for(j=0;p[i][j]!='\0';j++)
           {
                if(!((p[i][j]>='0'&&p[i][j]<='9')||(p[i][j]>='a'&&p[i][j]<='z')||(p[i][j]<='Z'&&p[i][j]>='A')||(p[i][j]=='_'))) 
                       flag=0; 
           }
           printf("%d\n",flag);
           flag=1;           
      }
      for(i=0;i<n;i++)
           free(p[i]);
      free(p);
     
}
