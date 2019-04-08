int main()
{ struct s
  {int N;
   char w[26];
   };
  struct s s[999];
  int n,i,j,c,a[26];
  scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
   { scanf("%d",&s[i].N);
     gets(s[i].w);
    }
  for (i=0;i<=(n-1);i++)
     { for (j=0;j<=25;j++)
         {  c=s[i].w[j];
            a[c-65]++;
          } 
      }
  c=0;
  for (i=0;i<=25;i++)
    { if (a[c]<a[i]) c=i; 
     }
  printf("%c\n%d\n",c+65,a[c]);
  for (i=0;i<=(n-1);i++)
    { for (j=0;j<=25;j++)
        if (s[i].w[j]==(c+65)) printf("%d\n",s[i].N);
     }
}