int main()
{
   int length,length1,length2;
   char a[50],b[50];
   int sum=0;
   int n=0;
   int i,j;
   scanf("%s",a);
   scanf("%s",b);
   length1=strlen(a);
   length2=strlen(b);
   if(length1!=length2)
   {
       printf("NO");
   }
   else
   {
       length=length1;
   for(i=0;i<length;i++)
   {
       for(j=0;j<length;j++)
       {
           if(a[i]==b[j])
           {n++;
           b[j]='0';
           break;
           }
        }
        sum++;
   }
    if(n==sum)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
   }
    return 0;
}
