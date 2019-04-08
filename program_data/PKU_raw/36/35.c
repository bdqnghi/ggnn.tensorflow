void main()
{char a[20],b[20];
 int i,m,n,j,s=0,t=0,k=0;
 for(i=0;i<=19;i++)
  {scanf("%c",&a[i]);
   if(a[i]==' ')
    {a[i]=0;
     break;}
   }
 gets(b);
 m=strlen(a);
 n=strlen(b);
 if(m!=n)
 printf("NO");
 else
{for(i='a';i<='z';i++)
  {for(j=0;j<m;j++)
    {if(a[j]==i)
      s=s+1;
     }
   for(j=0;j<n;j++)
     {if(b[j]==i)
      t=t+1;}
   if(s!=t)
     {printf("N0");
      k=1;
      break;}}
 if(k==0)
 printf("YES");}
}
