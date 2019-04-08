int main()
{
    int t,i;
    cin >> t;
    char str[t][10000];
    for (i=0;i<=t-1;i++)
    {
        cin >> str[i];
        int len;
        len=strlen(str[i]);
        int k,j,s=0;
 
      
        for (k=0;k<=len-1;k++)           
        {
            for (j=k+1;j<=len-1;j++)
            {
                if (str[i][k]==str[i][j])
                {
                     str[i][k]='\0';
                     str[i][j]='\0';            
                }
            }
            for (j=k-1;j>=0;j--)
            {
                if (str[i][k]==str[i][j])
                {
                                         str[i][k]='\0';
                                         str[i][j]='\0';
                }
            }
        }
        for (k=0;k<=len-1;k++)
        {
            if (str[i][k]!='\0')
            {
                                 cout << str[i][k] << endl;
                                 break;
            }
        }
        if (k==len)
        {
                   cout << "no" << endl;
        }    
   }

    return 0;
}