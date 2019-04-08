main()
{int i,j,k,m,n;
 int pd(char p[33]);
 scanf("%d",&n);
 char dc[n][33];
 for(i=0;i<n;i++)
  scanf("%s",dc[i]);
 for(i=0;i<n;i++)
  {m=strlen(dc[i]);
   if(pd(dc[i])==1)
     {for(j=0;j<(m-3);j++)
        printf("%c",dc[i][j]);
     }
   else
     {for(j=0;j<(m-2);j++)
   printf("%c",dc[i][j]);   
     }
   printf("\n");
  }
 
}
int pd(char p[33])
{int t=strlen(p);
 if (p[t-1]=='g') return (1);
 else return(0); 
}
