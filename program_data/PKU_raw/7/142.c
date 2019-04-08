
void main()
{
  char string[260],sub[50],replace[50],result[260];
  int i,j,t=0,mark=0,a=0;
  scanf("%s%s%s",string,sub,replace);
for(i=0;string[i]!='\0';i++,mark++)
  {
    if(string[i]==sub[0])
    {
         a=0;
         for(t=i,j=0;sub[j]!='\0';t++,j++)
         {
        			if(sub[j]!=string[t])
              {
                       a=1;
                       break;
              }
         }
         if(a==0){break;}
    }
  }
if(mark==strlen(string))   printf("%s\n",string);
else
{
      for(i=0;i<mark;i++)
      {
         result[i]=string[i];
      }
      for(i=mark,j=0;j<strlen(replace);i++,j++)
      {
          result[i]=replace[j];
      }
/*result[i]=0;*/
/*printf("%s\n", result);*/

      for(i=mark+j,t=mark+strlen(sub);string[t]!='\0';i++,t++)
      {
          result[i]=string[t];
      }
      result[i]='\0';
      printf("%s\n",result);
}
return;
}