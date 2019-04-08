int main()
{
    int n,i=1,m,flag1=0,flag2=0,lolo=0,p;
    char a[500],b[500];
    scanf("%s%s",a,b);
   n=strlen(a);
   p=strlen(b);
   if(n!=p)
   {printf("NO");}
   else
   {for(m=97;m<=122;m++)
   {for(i=0;i<n;i++)
   {
                    if(a[i]==m)
                    {flag1++;}
                    if(b[i]==m)
                    {flag2++;}
   }
   if(flag1!=flag2)
   {printf("NO");lolo=1;break;}
   else
   {lolo++;}
   }
   if(lolo>1)
   {printf("YES");}}
   return 0;
}
    
     
