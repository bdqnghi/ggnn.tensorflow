int main()
{
    char s1[260],s2[260];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int i,a1[260],m1,m2,a2[260];
    for(i=0;i<260;i++)
    a1[i]=0;
     for(i=0;i<260;i++)
    a2[i]=0;
    
    m1=strlen(s1);
     m2=strlen(s2);
   for(i=0;i<m1;i++)
   a1[m1-i-1]=s1[i]-'0';
      for(i=0;i<m2;i++)
   a2[m2-i-1]=s2[i]-'0';
   if(m2>m1)
   m1=m2;
    for(i=0;i<m1;i++)
    {
                     a1[i]=a1[i]+a2[i];
                     if(a1[i]>9)
                     {
                                a1[i]=a1[i]-10;
                                a1[i+1]=a1[i+1]+1;
                                }
                     }
                     int s=-1;
  for(i=m1;i>=0;i--)
  {if(a1[i]!=0)
  {s=i;
  break;    }
  }
  if(s==-1)
  printf("0");
 else
     {             for(i=s;i>=0;i--)
                   printf("%d",a1[i]);
                   }           
    getchar();getchar();getchar();getchar();getchar();getchar();
}