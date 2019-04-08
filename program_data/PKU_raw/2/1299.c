 struct author
 { int num;
   char name[26];
   
 }; 
 struct author ren[100];
 
 int main()
 { int n,i,j=0,k=0,biao,maxzuozhe,p,geshu[26]={0},max=0,maxdeshu[999];
 
   scanf("%d\n",&n);
   for(i=0;i<=n-1;i++)
   { scanf("%d",&ren[i].num);
    scanf("%s",ren[i].name);
   }
   
   for(i=0;i<=25;i++)
   { for(j=0;j<=n-1;j++)
      {
            for(k=0;k<=strlen(ren[j].name);k++)
            { if((i+'A')==ren[j].name[k])
              geshu[i]=geshu[i]+1;
              }
      } 
    }
       for(i='A'-65;i<='Z'-65;i++)
   { if(max<geshu[i])
     {max=geshu[i];
      biao=i;}
    }
    maxzuozhe='A'+biao;
    p=0;
    for(i=0;i<=n-1;i++)
    { for(k=0;k<=strlen(ren[i].name);k++)
      { if(maxzuozhe==ren[i].name[k])
        {maxdeshu[p]=ren[i].num;
         p++;
         break;}
      }
    }
    printf("%c\n",maxzuozhe);
    printf("%d\n",p);
    for(i=0;i<=p-1;i++)
    printf("%d\n",maxdeshu[i]);

    getchar();
    
}