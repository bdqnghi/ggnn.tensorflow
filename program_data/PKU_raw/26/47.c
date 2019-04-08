int main()
{
    char sentence[100],word[100][100];   //sentence???????word???????? 
    int i=0,j=0,k=0;    //???? 
    
    cin.getline(sentence,100);       //?? 
    
    
    for(i=0;i<strlen(sentence);i++)     //???????????? 
    {        
       if(sentence[i]==' ') continue;            //???? 
       if(sentence[i]!=' '&&sentence[i-1]==' ')  //?????????????? 
         {j++;k=0;}                             //??????word?? 
       word[j][k]=sentence[i];
       k++;
    }
    
    
    cout<<word[0];
    for(i=1;i<=j;i++)       //?? 
    cout<<" "<<word[i];
    
        return 0;
    }
