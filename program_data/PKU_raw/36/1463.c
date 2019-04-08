int main()
{
    char ch1[100],ch2[100],temp;
    int l,i,j;
    
    
    cin>>ch1>>ch2;
      
      
    if(strlen(ch1)==strlen(ch2))
    {
           l=strlen(ch1);
           for(i=0;i<l;i++)//???? 
              for(j=0;j<l-i-1;j++)
              {
                  if(ch1[j]>ch1[j+1]) 
                  {
                      temp=ch1[j];
                      ch1[j]=ch1[j+1];
                      ch1[j+1]=temp;                
                  }               
                  if(ch2[j]>ch2[j+1])
                  {
                      temp=ch2[j];
                      ch2[j]=ch2[j+1];
                      ch2[j+1]=temp;               
                  }
              } 
              
             if(strcmp(ch1,ch2)==0)
                cout<<"YES";
             else
                cout<<"NO";                    
    }
    else
    {
        cout<<"NO";
    }
 
    return 0;
}