
int EnStack(char *Stack,int Top,char Letter)
{
    Stack[++Top]=Letter;
    return Top;
}    

int PushAndPop(char *Stack,int Top)
{
  while(Top>=0)
        putchar(Stack[Top--]);
  Stack[0]='\0';
  return Top;
}  

int IsEmpty(char *Stack)
{
    return Stack[0]=='\0';
}

int main()
{
    int Top=-1;
    char Stack[20]={'\0'},Str[101]={'\0'};
    int flag=0,i;
    gets(Str);
    for(i=strlen(Str)-1;i>=0;i--)
       {
        if(Str[i]!=' ')
          Top=EnStack(Stack,Top,Str[i]);
        else if(!IsEmpty(Stack))
               {
                if(flag)
                   printf(" ");
                else 
                    flag=1;
                Top=PushAndPop(Stack,Top);
               }     
       }
    if(!IsEmpty(Stack))
      {
       if(flag)
         printf(" ");
       PushAndPop(Stack,Top);
       }  
   return 1;
}                      
