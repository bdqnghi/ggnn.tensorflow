int main()
{
  int n,i,j,k,f,g,t;
  scanf("%d",&n);
  int p[n],e[n],d[n];
  char a[n][100],b[n][100],c[n][100],s[100];
  for(i=0;i<n;i++)
  {
    scanf("%s %d",a[i],&p[i]);
  }
      j=0,k=0;
  for(i=0;i<n;i++)
  {

    if(p[i]>=60)  
    {
    e[j]=p[i];
    strcpy(b[j],a[i]);
    j++;
    }  
    else
    {
     strcpy(c[k],a[i]);
     k++;    
    }            
  }
  for(f=0;f<j-1;f++)
   {
   for(g=0;g<j-1-f;g++)  
     {
     if(e[g]<e[g+1])
     {
      t=e[g+1];
      e[g+1]=e[g];
      e[g]=t;
      strcpy(s,b[g+1]);
      strcpy(b[g+1],b[g]);
      strcpy(b[g],s);
     }
     }
   }  
for(i=0;i<j;i++)
{printf("%s\n",b[i]);}
for(i=0;i<k;i++)
{printf("%s\n",c[i]);}
  getchar();
  getchar();
}
