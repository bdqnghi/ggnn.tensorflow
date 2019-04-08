int main(int argc, char *argv[])
{
  int n,i,j,l[50],max,min;
  char sen[1000],w[50][20];
  gets(sen);
  n=strlen(sen);
  for(i=0;i<50;i++)
  {l[i]=0;
  for(j=0;j<20;j++)
  w[i][j]='\0';}
  j=0;
  for(i=0;i<n;i++)
  {
       if(sen[i]!=' ')
       {
            w[j][l[j]]=sen[i];
            l[j]++;
       }
       else
       {
           j++;
       }
  }
  max=l[0];
  min=l[0];
  for(i=0;i<=j;i++)
  {
       if(max<l[i])
       {
           max=l[i];
       }
       if(min>l[i])
       {
           min=l[i];
       }
  }
  for(i=0;i<=j;i++)
  {
       if(l[i]==max)
       {
            printf("%s\n",w[i]);
            break;
       }
  }
  for(i=0;i<=j;i++)
  {
       if(l[i]==min)
       {
            printf("%s\n",w[i]);
            break;
       }
  }

  return 0;
}
