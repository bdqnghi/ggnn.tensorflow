int main()
{
    int s[9][9],s1[9][9],i=0,j=0,m=0,n=0,k=0;
    for(i=0;i<=8;i++)//??? 
    {
        for(j=0;j<=8;j++)
        {
           s[i][j]=0; 
           s1[i][j]=0;               
        }                 
    }
    cin>>m>>n;
    s[4][4]=m;
    for(k=1;k<=n;k++)//?? 
    {
             for(i=1;i<=7;i++)     //?? 
             {
                    for(j=1;j<=7;j++)
                    {
                       if(s[i][j]!=0)
                       {
                           s1[i][j]+=2*s[i][j];
                           s1[i+1][j]+=s[i][j];
                           s1[i-1][j]+=s[i][j];
                           s1[i][j+1]+=s[i][j];
                           s1[i][j-1]+=s[i][j];
                           s1[i+1][j+1]+=s[i][j];
                           s1[i-1][j-1]+=s[i][j];
                           s1[i+1][j-1]+=s[i][j];
                           s1[i-1][j+1]+=s[i][j];
                           
                       }                
                    }                 
             }  
             for(i=0;i<=8;i++) 
             {
                    for(j=0;j<=8;j++)
                    {
                         s[i][j]=s1[i][j];                 
                    }                   
             }  
             for(i=0;i<=8;i++) //s1?? 
             {
                    for(j=0;j<=8;j++)
                    {
                         s1[i][j]=0;                 
                    }                   
             }
                         
    }
    for(i=0;i<=8;i++)//?? 
    {
       for(j=0;j<=8;j++)
       {
          if(j==0)
          {cout<<s[i][j];continue;}
          if(j==8)
          {cout<<" "<<s[i][j]<<endl;continue; }
          cout<<" "<<s[i][j];
       }                 
    }
return 0;    
}