int main()
{
    int n,i,num;
    char word[50][20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
      scanf("%s",word[i]);
      num=strlen(word[i]);
      if(word[i][num-1]=='r'&&word[i][num-2]=='e') 
      { 
        word[i][num-1]='\0';
        word[i][num-2]='\0';
        printf("%s\n",word[i]); 
      }  
     else if(word[i][num-1]=='y'&&word[i][num-2]=='l') 
      {
           word[i][num-1]='\0';
        word[i][num-2]='\0';
        printf("%s\n",word[i]); 
      }              
      else if(word[i][num-1]=='g'&&word[i][num-2]=='n'&&word[i][num-3]=='i') 
      {
           word[i][num-1]='\0';
        word[i][num-2]='\0';
        word[i][num-3]='\0';
        printf("%s\n",word[i]); 
      }                            
                    }
    return 0;
    }
