
int main()
{
    char str[14],substr[4];
    int l,max,n,i;
    while(cin>>str>>substr)
    {
        l=strlen(str);
        max=str[0];n=0;
        for(i=0;i<l;i++)
        {
            if(str[i]>max)
            {
                max=str[i];
                //cout<<i<<" ";
                n=i;              
            }         
        }
        for(i=l+3;i>=n+4;i--)
        {
            str[i]=str[i-3];                     
        }
        str[n+1]=substr[0];
        str[n+2]=substr[1];
        str[n+3]=substr[2];
        cout<<str<<endl;       
                
    }
    return 0;    
}