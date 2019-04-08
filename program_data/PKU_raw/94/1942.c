int main()
{
int N;
int sz[500];
scanf("%d",&N);
int i,s=0;
for(i=0;i<N;i++)
{
   scanf("%d",&sz[i]);
}
int jsz[500];
int j=0;
for(i=0;i<N;i++)
{
  if(sz[i]%2!=0)
  s++;
}
for(i=0;i<N;i++)
{
  if(sz[i]%2!=0)
  {
    jsz[j]=sz[i];
    j++;
  }
}
int e,f;
for(f=1;f<=s;f++)
{
  for(i=0;i<s-f;i++)
  {
if(jsz[i]>jsz[i+1])
   {
   e=jsz[i+1];
   jsz[i+1]=jsz[i];
   jsz[i]=e;
   }
   }
}
printf("%d",jsz[0]);
for(i=1;i<s;i++)
{
   printf(",%d",jsz[i]);
}
return 0;
}
