int main()
{
    char str[100];
    for(int i=0;i<100;i++)
    {
            str[i]='\0';
    }                                    
    cin.get(str,100);             //???? 
    int i=0;int k=0;
    for(i=0;i<100;i++)
    {
         if(str[i]=='\0')
        { k=i;
         break;
         }else if(str[i]!=' ')
             continue;
         else{
                 for(int j=i;j<100;j++)
                 {
                     if(str[i+1]!=' ')
                     break;
             else{
                        for(int j=i;j<100;j++)  //????????????? 
                        {
                            str[j]=str[j+1];
                        }
                     }
                 }
             }
    }
    for(int i=0;i<k;i++)
    {
            cout<<str[i];
    }

    return 0;
}
