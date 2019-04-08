void main()
{ int n,i,k,j;
  int t[100000];
  scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
     scanf("%d",&t[i]);
  printf("\n");
  scanf("%d",&k);
  for (i=0;i<=(n-1);i++)
     if (t[i]==k) t[i]='a';
  if (n==1) {if (t[0]!='a') printf("%d",t[0]);}
  else
  {for (i=0;i<=(n-1);i++)
     { if (t[i]!='a')
       {printf("%d",t[i]);
        for (j=(i+1);j<=(n-1);j++)
        if (t[j]!='a') printf(" %d",t[j]);
        break;
        }
      }
   }
}