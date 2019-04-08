void main ()
{
int a[26],i,t=0;
char c;
for (i=0;i<=25;i++)
  a[i]=0;
while ((c=getchar())!='\n')
{
for (i=0;i<=25;i++)
 {
  if (c==('a'+i))
    {
     a[i]++;
     break;
     }
  }
}
for (i=0;i<=25;i++)
 {
  if (a[i]!=0)
    t++;
  }
if (t==0)
  printf ("No\n");
else 
  for (i=0;i<=25;i++)
   {
    if (a[i]!=0)
      printf ("%c=%d\n",'a'+i,a[i]);
   }        
}