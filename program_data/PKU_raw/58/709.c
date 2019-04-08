int main()
{
       char c[81];
       int i,j,n,a,length,p,q;
       scanf("%d",&n);
       getchar();
       for(i=0;i<n;i++)
       {
               gets(c);
               length=strlen(c);
               p=0;
               q=0;
               if(c[0]=='_'||(c[0]>64&&c[0]<91)||(c[0]>96&&c[0]<123))
                       p=1;
               else
               {
                       p=0;
               }
               for(j=0;j<length;j++)
               {
                       if(c[j]=='_'||(c[j]>64&&c[j]<91)||(c[j]>96&&c[j]<123)||(c[j]>47&&c[j]<58))
                               q=1;
                       else
                       {
                               q=0;
                               break;
                       }
               }
               if(p&&q)
                       a=1;
               else
                       a=0;
               printf("%d\n",a);
       }
       return 0;
}
