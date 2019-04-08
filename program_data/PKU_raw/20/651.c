int main()
{
int max,i,max_index;
char str1[20],str2[10],ans[20],t[20];
while(scanf("%s %s",str1,str2)!=EOF)
{
  max=0;
  for(i=0;str1[i];i++)
  {
   if(str1[i]>max)
   {
    max=str1[i];
    max_index=i;
  }
  }
   strcpy(ans,"");
   strncat(ans,str1,max_index+1);
   strcat(ans,str2);
   for(i=max_index+1;str1[i];i++)
   {
    t[i-max_index-1]=str1[i];
   }
   t[i-max_index-1] = '\0';
   strcat(ans,t);
  
  printf("%s\n",ans);
}
return 0;
}
