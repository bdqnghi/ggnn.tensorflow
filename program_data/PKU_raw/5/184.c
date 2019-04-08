int main()
{
 int w=0,g=0;
 double n;
 char v[100],c[100];
 scanf("%lf",&n);
 scanf("%s",v);
 scanf("%s",c);
 char A,T,G,C;
 if(strlen(v)!=strlen(c))
  {
    printf("error");                     
  }
 else
    {
       for(int i=0;i<=strlen(v)-1;i++)
        { 
          if(((v[i]!='A')&&(v[i]!='G')&&(v[i]!='C')&&(v[i]!='T'))||((c[i]!='A')&&(c[i]!='G')&&(c[i]!='C')&&(c[i]!='T')))
          {     g=1;
               printf("error");
               break;                                                                                    
          }
          else if(v[i]==c[i])
            {
              w++;          
            }        
        } 
       
      double l=1.0*w/strlen(v);
      if((l>n)&&(g==0)){printf("yes");}
      else if((l<=n)&&(g==0)){printf("no");}                                   
    }
int u;scanf("%d",&u);    
   return 0;          
}
