int main()
{
    char chn[120];
    int i,l;
    int z,t;
    char a,b;
    while(scanf("%s",chn)!=-1)
    {
    l = strlen(chn);
    printf("%s\n",chn);
    while(1)
    {
      z = -1;
      t = 0;
      for(i = 0;i < l; i++)
      {
        if(z == -1 && chn[i] == '(')
           z = i;
        else if(z >= 0 && chn[i] == ')')
          {
             chn[z] = ' ';
             chn[i] = ' ';
             t ++;        
             break;
          }        
        else if(z >= 0 && chn[i] == '(')
          z = i;
      }     
      if(!t) break;
    }
    for(i = 0;i < l;i++)
    {
       if(chn[i] == '(')    
         chn[i] = '$';
       else if(chn[i] == ')')
         chn[i] = '?';
       else chn[i] = ' ';
     printf("%c",chn[i]);   
    }
    printf("\n");
  }    
  
 return 0;    
}

