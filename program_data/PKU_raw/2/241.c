int main()
{
    int n,i,j,k;
    scanf("%d\n",&n);
    
    struct book
    {
    int num;
    char name[26];
     }book[999];

    for(i=0;i<n;i++)
    { scanf("%d %s\n",&book[i].num,book[i].name);
     }

    struct author
    {
    char l;
    int count;
     }au[26];

    for(i=0;i<26;i++)
    { au[i].l=65+i;
      au[i].count=0;
     }

    for(i=0;i<26;i++)
    { for(j=0;j<n;j++)
        {  for(k=0;k<26;k++)
             {if(au[i].l==book[j].name[k])
                 {au[i].count++;
                  break;
                  }
             }    
         }
    }

    int max=0;
    for(i=1;i<26;i++)
    { if(au[max].count<au[i].count)
           max=i;
     }
    printf("%c\n%d\n",au[max].l,au[max].count);

    for(j=0;j<n;j++)
    { for(k=0;k<26;k++)
      {
       if(au[max].l==book[j].name[k])
          { printf("%d\n",book[j].num);
            break;
           }
       }
     }
    return 0;
}
