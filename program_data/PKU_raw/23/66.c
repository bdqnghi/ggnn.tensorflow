main()
{ int i,j,w,t=0,c[100]={0};
  char s[101],a[100][100];
  gets(s);
  if(s[0]==' ')w=0;
  else w=1;
  for(i=1;s[i-1]!='\0';i++)
  {  if(w==1)
      {a[t][c[t]]=s[i-1];
       c[t]++;
       if(s[i]!=' ')w=1;
       else w=0;
       continue;
      }
     if(w==0)
     { if(s[i]!=' '){t++;w=1;}
     }
  }
  for(i=t;i>=0;i--)
  { for(j=0;j<c[i];j++)
     printf("%c",a[i][j]);
    if(i>=1)printf(" ");
  }
}