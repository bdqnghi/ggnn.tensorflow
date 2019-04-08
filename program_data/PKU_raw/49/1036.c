int judge(char *p)
{  
   int l = strlen(p); 
   char te[l];
   int i,j;
   for(i=0;i<l;i++)
     te[l-i-1]=p[i];
   te[l]='\0';
   /*strcpy(p,te);*/
   if(strcmp(p,te)==0)
     return 1;
   else 
      return 0;
    
}

main()
{  int i,k,j,t,l,m,h,g,n;
   char p[510];
   gets(p);
  
   h=strlen(p);
  /* printf("%d",judge(p));*/
   char temp[h];
   for(l=2;l<=h;l++)
   {
      for(j=0;j<h-l+1;j++)
         {  t=j;
            for(g=0;g<l;g++)
            {
               temp[g]=p[t];
               t++;
            }
            temp[g]='\0';
            if(judge(temp)==1) printf("%s\n",temp);
         }
   }
   
   
}
