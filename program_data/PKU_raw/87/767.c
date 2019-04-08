int main (){
    int a[100][6],i,j,s[100],n;
    
    for(i=0;i<100;i++)
    {
        
            for(j=0;j<6;j++)
            {
                scanf("%d",&(a[i][j]));
            }
        if(a[i][0]==0&&a[i][1]==0&&a[i][3]==0)
        {
            n=i;
            break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        s[i]=(a[i][3]+12-a[i][0])*3600+(a[i][4]-a[i][1])*60+(a[i][5]-a[i][2]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",s[i]);
    }

    
    return 0;
}

