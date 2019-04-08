struct data
{
 int no;
 char au[10];
};
void main()
{
 struct data lib[1000];
 char x;
 int n,i,j,num[26]={0},l[1000],k,max;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&lib[i].no);
  scanf("%s",lib[i].au);
  l[i]=strlen(lib[i].au);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<l[i];j++)
  {
   num[lib[i].au[j]-65]=num[lib[i].au[j]-65]+1;
  }
 }
 max=num[0];
 for(i=0;i<26;i++)
 {
  if(num[i]>max)
  {
   max=num[i];
   k=i;
  }
 }
 printf("%c\n",k+65);
 printf("%d\n",max);
 x=k+65;
 for(i=0;i<n;i++)
 {
  for(j=0;j<l[i];j++)
  {
   if(lib[i].au[j]==x)
   printf("%d\n",lib[i].no);
  }
 }
}