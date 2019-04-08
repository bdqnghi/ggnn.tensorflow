main()
{
int i;
int n;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
 char a[81];
gets(a);
int j,k,L;
L=0;
if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))   
  {
      for(j=0;a[j]!='\0';j++)
       { 
         if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
          continue;
          else
          {L++;break;}
       }
       if(L!=0)
       printf("0\n");
       else
       printf("1\n");
  }   
else
printf("0\n");
}
} 
