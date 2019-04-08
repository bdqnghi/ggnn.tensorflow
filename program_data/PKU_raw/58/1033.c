int main()
{
    char num[10];
    char str[1000][80];
    int n,i,j,length,m=0;
    gets(num);
    n=atoi(num);
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        length=strlen(str[i]);
        if((str[i][0]<='z'&&str[i][0]>='a')||(str[i][0]<='Z'&&str[i][0]>='A'||str[i][0]=='_'))
        {
           m=1;
           for(j=0;j<length;j++)
           {
               if((str[i][j]<='z'&&str[i][j]>='a')||(str[i][j]<='Z'&&str[i][j]>='A'||str[i][j]=='_')
               ||(str[i][j]>='0'&&str[i][j]<='9'))           
                  m=1;
               else m=0;
               if(m==0)
                break;
           }
        }
        else{m=0;} 
        printf("%d\n",m);
     }                                                                                     
     return 0;      
    
}