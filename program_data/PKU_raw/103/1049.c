
main()
{
   int i=0,j=0,b[26]={0};
   char a[1000],c[26];
   scanf("%s",a);
   for(int k=0;a[k]!='\0';k++)
   {if((a[k]>='a')&&(a[k]<='z'))
    a[k]+=('A'-'a');}
   for(;a[i]!='\0';i++)
   {
    if(a[i+1]==a[i])
    b[j]++;
    else
    {c[j]=a[i];
    j++;}
     }
   
    for(int k=0;k<j;k++)
    {printf("(%c,%d)",c[k],b[k]+1);}

}