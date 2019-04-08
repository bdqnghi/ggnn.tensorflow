//2981?????
// sst 2012.8.8 
int main()
{
    char str1[MAX_LEN+10],str2[MAX_LEN+10];
    int  an1[MAX_LEN+10],an2[MAX_LEN+10]; 
    int i,j; 
    gets(str1);
    gets(str2);
    memset(an1,0,sizeof(an1));
    memset(an2,0,sizeof(an2));
   int  Lenth1=strlen(str1);
   for(j=0,i=Lenth1-1;i>=0;i--,j++)
       an1[j]=str1[i]-'0';
   int Lenth2=strlen(str2); 
   for(j=0,i=Lenth2-1;i>=0;i--,j++)
       an2[j]=str2[i]-'0';
       int Highestpos=0;   
   for(int i=0;i<MAX_LEN;i++)
   {
          an1[i]=an1[i]+an2[i];
          if(an1[i]>=10)
          {
                       an1[i]=an1[i]-10;
                       an1[i+1]=an1[i+1]+1;
          }
          if(an1[i]) 
            Highestpos=i;
   }
   for(i=Highestpos;i>=0;i--)
   cout<<an1[i];
   return 0;
}          
                     