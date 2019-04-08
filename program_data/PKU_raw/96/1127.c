
int div13(int A)
{
 int div;
 if (A>=13*9)
    div=9;
 else 
 {
  if (A>=13*8)
  {
   div=8;
  }
  else
  {
   if (A>=13*7)
   {
    div=7;
   }
   else
   {
    if (A>=13*6)
    {
     div=6;
    }
    else
    {
     if (A>=13*5)
     {
      div=5;
     }
     else
     {
      if (A>=13*4)
      {
       div=4;
      }
      else
      {
       if (A>=13*3)
       {
        div=3;
       }
       else
       {
        if (A>=13*2)
        {
         div=2;
        }
        else
        {
         if (A>=13*1)
         {
          div=1;
         }
         else
         {
          div=0;
         }   
        }   
       }   
      }   
     }   
    }   
   }
  }
 }
 return div;
}

int lev13(int A)
{
 int lev;
 if (A>=13*9)
 {   
    lev=A-13*9;
 }
 else 
 {
  if (A>=13*8)
  {
   lev=A-13*8;
  }
  else
  {
   if (A>=13*7)
   {
    lev=A-13*7;
   }
   else
   {
    if (A>=13*6)
    {
     lev=A-13*6;
    }
    else
    {
     if (A>=13*5)
     {
      lev=A-13*5;
     }
     else
     {
      if (A>=13*4)
      {
       lev=A-13*4;
      }
      else
      {
       if (A>=13*3)
       {
        lev=A-13*3;
       }
       else
       {
        if (A>=13*2)
        {
         lev=A-13*2;
        }
        else
        {
         if (A>=13*1)
         {
          lev=A-13*1;
         }
         else
         {
          lev=A;   
         }   
        }   
       }   
      }   
     }   
    }   
   }
  }
 }
 return lev;
}

main()
{
 char dvdd[100];
 char ans[100];
 int N, div, lev, a, head;
 int i;
 for (i=0; i<100; i++)
     ans[i]='0';
 scanf("%s", dvdd);
 N=strlen(dvdd);
 lev=0;

 for (i=0; i<=N-1; i++)
 {
  a=dvdd[i]-'0'+lev*10;
  div=div13(a);
  lev=lev13(a);
  ans[i]=div+'0';   
 }
 if (N==1)
 {
    printf("0\n");
    printf("%d\n", lev); 
 }
 else
 {
  head=(dvdd[0]-'0')*10+(dvdd[1]-'0');
  if (head<13)
  {
   if (N==2)
      printf("0\n");
   else
   {
    for (i=2; i<=N-1; i++)
        printf("%c", ans[i]);
    printf("\n");
   }         
   printf("%d\n", lev);   
  }
  else
  {
   for (i=1; i<=N-1; i++)
        printf("%c", ans[i]);
   printf("\n");
   printf("%d\n", lev);   
  }
 }
}
