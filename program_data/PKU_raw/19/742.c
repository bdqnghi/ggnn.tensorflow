main()
{
      int x,y,z,i,j,k=0,c,flag=0;
      char s[200],a[100],b[100],temp[300];
      gets(s);gets(a);gets(b);
      x=strlen(s);y=strlen(a);z=strlen(b);
      
      for(i=0;i<x+y;)
      {
          if(flag==0)
          {  
             c=1;          
             if(s[i]==' ') flag=0;
             else flag=1;
          
             for(j=0;j<y;j++)
                 if(a[j]!=s[i+j])
                     c*=0;
          
             if(c!=1)
             {
                 temp[k]=s[i];
                 i++;
                 k++;
             }
             else
             {
                 for(j=0;j<z;j++,k++)
                     temp[k]=b[j];
                 i+=y;
             }
        
          }
          else
          {
              
              if(s[i]==' ') flag=0;
              else flag=1;
              temp[k]=s[i];
              k++;
              i++;
          }
      }
      for(i=0;i<k-y;i++)
          printf("%c",temp[i]);
}
