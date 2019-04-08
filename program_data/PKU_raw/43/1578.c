int main()
{
    int number,i,j,f,g,s;
    int k=1;
    scanf("%d",&number);
    int num[20000];
    for(i=2;i<number;i++)
    {  s=i-1;
    for(j=(i-1);j>0;j--)
    {
    if(i%j!=0)
    s--;}
   if(s==1)
   {num[k]=i;
    k++;}}
   for(f=k-1;f>0;f--)
 {
                  for(g=1;g<=f;g++)
                  {if(num[f]+num[g]==number)
                  printf("%d %d\n",num[g],num[f]);}}
  getchar();
  getchar();
  return 0;
}