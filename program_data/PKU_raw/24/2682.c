struct word
{
    char a[40];
    int b;
};
int main()
{
   int n;scanf("%d",&n);
   int i;
   struct word dd[200]={0};

   for(i=0;i<n;i++)
   {
       scanf("%s",dd[i].a);
        dd[i].b=strlen(dd[i].a);
   }
   int max=dd[0].b;int x=0;
   int min=dd[0].b;int y=0;
   for(i=0;i<n;i++)

   {
       if(dd[i].b>max)
       {
           max=dd[i].b;
           x=i;
       }
       if(dd[i].b<min)
       {
           min=dd[i].b;
           y=i;
       }
   }
   printf("%s\n%s",dd[x].a,dd[y].a);
/*printf("%d %d ",max,min);*/
    return 0;
}