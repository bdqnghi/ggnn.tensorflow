int main()
{
    int n,m,i,j,k,sum,min;
    cin >>m;
    for(i=1;i<=m;i++)//m×é&Ecirc;&yacute;&frac34;&Yacute;  &Ntilde;&shy;&raquo;·&Ecirc;&auml;&Egrave;&euml; 
    {
        int a[m][m];
        for(j=0;j<m;j++)//&Ntilde;&shy;&raquo;·&Ecirc;&auml;&Egrave;&euml;&frac34;&Oslash;&Otilde;ó 
        for(k=0;k<m;k++)
        cin >>a[j][k];
        sum=0;
        for(n=m;n>1;n--)//&frac34;&Oslash;&Otilde;ó&sup1;é&Aacute;&atilde; 
    {  
        for(j=0;j<n;j++)//&ETH;&ETH;&sup1;&aelig;&Aacute;&atilde; 
        {
            min=a[j][0];
            for(k=1;k<n;k++)
            {
                if(a[j][k]<min)//&Otilde;&Ograve;&sup3;&ouml;&Atilde;&iquest;&ETH;&ETH;×&icirc;&ETH;&iexcl;&Ouml;&micro; 
                {
                    min=a[j][k];
                }
            }
            for(k=0;k<n;k++)
            {
                a[j][k]=a[j][k]-min;//&Atilde;&iquest;&ETH;&ETH;&para;&frac14;&frac14;&otilde;&Egrave;&yen;×&icirc;&ETH;&iexcl;&Ouml;&micro; 
            }
        }
        for(k=0;k<n;k++)//&Aacute;&ETH;&sup1;é&Aacute;&atilde; 
        {
            min=a[0][k];
            for(j=1;j<n;j++)
            {
                if(a[j][k]<min)
                {
                    min=a[j][k];
                }
            }
            for(j=0;j<n;j++)
            {
                a[j][k]=a[j][k]-min;
            }
        }
        sum=sum+a[1][1];//sum&frac14;&Oacute;&Eacute;&Iuml;a[1][1] 
        for(j=1;j<n-1;j++)//&frac34;&Oslash;&Otilde;ó&Iuml;&ucirc;&frac14;&otilde; 
        for(k=0;k<n;k++)
        {
            a[j][k]=a[j+1][k];//&ETH;&ETH;&Iuml;&ucirc;&frac14;&otilde; 
        }
        for(k=1;k<n-1;k++)//&Aacute;&ETH;&Iuml;&ucirc;&frac14;&otilde; 
        for(j=0;j<n;j++)
        {
            a[j][k]=a[j][k+1];
        }
    }
    cout <<sum<<endl;//&Ecirc;&auml;&sup3;&ouml; 
    }
   
    return 0;
}
              
                
     
