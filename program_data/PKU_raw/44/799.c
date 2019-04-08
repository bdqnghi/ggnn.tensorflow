main()
{char a[6][99999];
 int i,k,j,m,n,p,q;
 void re(char x[99999]);
 void xl(char x[99999]);
 for(i=0;i<6;i++)
 {scanf("%s",a[i]);re(a[i]);xl(a[i]);}
 for(i=0;i<6;i++)
  printf("%s\n",a[i]);

}
 
 
 void re(char x[99999])
 {int i,t;
  int l=strlen(x); 
  if(strcmp(x,"-0")==0) 
    strcpy(x,"0");
  else 
   { if(x[0]=='-') 
     { for(i=1;i<=(l/2);i++)
       {t=x[i];x[i]=x[l-i];x[l-i]=t;}
     }
     else
     { for(i=0;i<(l/2);i++)
       {t=x[i];x[i]=x[l-i-1];x[l-i-1]=t;}  
     }      
   }
 }
 void xl(char x[99999])
 {int i,p;
  if(strcmp(x,"0")!=0)
     {if(x[0]=='-')
       {for(i=1,p=0;x[i]=='0';i++)
          {p++;}
        for(i=p+1;x[i]!='\0';i++)
         {x[i-p] = x[i];}
        x[strlen(x)-p]='\0';
       }
      else 
       {for(i=0,p=0;x[i]=='0';i++)
         {p++;}
        for(i=p;x[i]!='\0';i++)
         {x[i-p]=x[i];}
        x[strlen(x)-p]='\0'; 
       }
   
     }
 }
