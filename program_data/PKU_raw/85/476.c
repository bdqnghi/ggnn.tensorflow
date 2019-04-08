
void function(int,int);

int main()
{
   char s[20][100];
   int i,j,a,k;
   scanf("%d",&a);

   for(i=0;i<a;i++)
   {
      scanf("%s",s[i]);
   }

   for(i=0;i<a;i++)
   {
       k=0;
       if(s[i][0]<='9'&&s[i][0]>='0')
       {
           printf("no\n");
           continue;
       }
       for(j=0;j<strlen(s[i]);j++)
       {
           if((((s[i][j]<='9'&&s[i][j]>='0')||(s[i][j]<='Z'&&s[i][j]>='A')||(s[i][j]<='z'&&s[i][j]>='a')||(s[i][j]=='_')))==0)
           {
               printf("no\n");
               k=1;
               break;
           }
       }
       if(k==0) printf("yes\n");
   }

   return 0;

}