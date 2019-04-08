
int main()
{
int p,i,n,l,a[10000],k;
char q[10000][20];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",q[i]);
a[i]=1;}
for(i=0;i<n;i++)
{k=strlen(q[i]);
for(l=0;l<k;l++)
{p=q[i][l];
if(l==0)
{if(((p>=65)&&(p<=90))||((p>=97)&&(p<=122))||(p==95))
{continue;}
else
{a[i]=0;
break;}
}
else
{if(((p>=65)&&(p<=90))||((p>=97)&&(p<=122))||((p>=48)&&(p<=57))||(p==95))
{continue;}
else
{a[i]=0;
break;}
}
}
}
for(i=0;i<n;i++)
{if(a[i]==1)
{printf("yes\n");}
else if(a[i]==0)
{printf("no\n");}
}


  return 0;
}
