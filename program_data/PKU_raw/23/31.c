
void main()
{
 char a[1000],c[1000];
 int i,j=1,k,b[1000]={0},len;
 gets(a);
 len=strlen(a);
 for(i=strlen(a)-1;i>=0;i--)
  a[i+1]=a[i];
 for(i=1;i<=len;i++)
  if(a[i]==' ')
   {b[j]=i;j++;}
 b[j]=len+1;
 //printf("%d",j);
 for(i=1;i<=j;i++)
  for(k=b[i-1]+1;k<=b[i]-1;k++)
  {
   c[k]=a[b[i-1]+b[i]-k];
   //printf("%d %d\n",k,b[i-1]+b[i]-k);
  }
 for(i=0;i<=j;i++)
  c[b[i]]=' ';
 for(i=len;i>=1;i--)
  printf("%c",c[i]);
}
