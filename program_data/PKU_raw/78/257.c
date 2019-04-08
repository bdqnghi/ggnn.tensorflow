main()
{
   int z[5],q[5],s[5],l[5],w[4];
   int i,a,b,c,d,j,t;
   char ch[5];
   for(i=0;i<5;i++)
   {
     z[i]=i+1;
     q[i]=i+1;
     s[i]=i+1;
     l[i]=i+1;                
   } 
   for(a=0;a<5;a++)
   {
      for(b=0;b<5;b++)             
      {
         for(c=0;c<5;c++)             
        {
         for(d=0;d<5;d++)
         {
          if(z[a]+q[b]==s[c]+l[d]&&z[a]+l[d]>s[c]+q[b]&&z[a]+s[c]<q[b])
          //{printf("%d %d %d %d\n",a,b,c,d);}
            {w[0]=a;w[1]=b;w[2]=c;w[3]=d;
              ch[a]='z';z[a]=a+1;
   ch[b]='q';q[b]=b+1;
   ch[c]='s';s[c]=c+1;
   ch[d]='l';l[d]=d+1;
            
            
            }
                    
         }
        }            
      }             
   }
   
   
    for(i=0;i<4;i++)
   {
     //printf("%d\n",w[i]);                
   }  
   for(j=0;j<3;j++)
   {
       for(i=0;i<3-j;i++)
       {
        if(w[i]<w[i+1])
        {
           t=w[i];
           w[i]=w[i+1];
           w[i+1]=t;              
        }                  
       }            
   }
    for(i=0;i<4;i++)
   {
    // printf("%d\n",w[i]);                
   }  
   for(i=0;i<4;i++)
   {
      t=w[i];             
     printf("%c %d\n",ch[t],t*10+10);                
   }  
      //printf("%d %d %d %d\n",a,b,c,d);
getchar();
getchar();
getchar();      
}