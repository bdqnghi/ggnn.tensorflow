
main()
{
      char in[501];//?????? 
      char zi[501][5];//????? 
      int point[501];//??????????????? 
      for (int i=0;i<501;i++)point[i]=-1;
      int n,len;
      
      scanf("%d%s",&n,in);
      len=strlen(in);
      
for (int i=0;i<=len-n;i++)
{
          for (int j=0;j<n;j++)zi[i][j]=in[i+j];//????????
          zi[i][n]='\0'; 
}
 

for (int i=0;i<len-n;i++)
for (int j=i+1;j<len-n+1;j++)
{
    if ((strcmp(zi[i],zi[j])==0)&&point[i]==-1)//???????????-1????????????? 
    {
               point[j]=i;  //di yi ci chuxian              
    }
     if ((strcmp(zi[i],zi[j])==0)&&point[i]!=-1)
    {
               point[j]=point[i];                
    }
}
int num[501];//???? 
for (int i=0;i<501;i++)num[i]=0;
for (int i=0;i<=len-n;i++)
{   
    if (point[i]==-1)num[i]++;//printf("%d->%d\n",i,num[i]);}
    if (point[i]!=-1)num[point[i]]++;//printf("%d->%d\n",point[i],num[point[i]]);}//????????????? 
}
int max=1;
for (int i=0;i<=len-n;i++)
{
    if (point[i]==-1&&num[i]>max)max=num[i];
}

if (max==1)printf("NO");
if (max>1)
{       
          printf("%d\n",max);
          for (int i=0;i<len-n;i++)
          {
              if (num[i]==max)
              printf("%s\n",zi[i]);
          }
}
 
 
     
}
