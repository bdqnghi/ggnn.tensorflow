int main()
{
    int n,m,i,j,day,count=0,iday[100][100];
    char room[100][100];
    for(i=0;i<100;i++)
        for(j=0;j<100;j++)
        {
            iday[i][j]=200;
        }
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%c",&room[i][j]);
            while((room[i][j]==' ')||(room[i][j]=='\n'))
            {
                scanf("%c",&room[i][j]);
            }
            if(room[i][j]=='@')
                iday[i][j]=1;
        }
    scanf("%d",&m);
    for(day=2;day<=m;day++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(  (room[i][j]=='@')  &&  (iday[i][j]<day)  )
                {
                    if(  (room[i][j+1]=='.') && (j+1<n)  )
                    {
                        room[i][j+1]='@';
                        iday[i][j+1]=day;
                    //printf("??room[%d][%d]\n",i,j+1);
                    }
                    
                    if(  (room[i][j-1]=='.') && (j-1>=0)  )
                    {
                        room[i][j-1]='@';
                        iday[i][j-1]=day;
                     //   printf("??room[%d][%d]\n",i,j-1);
                    }
                    
                    if(  (room[i+1][j]=='.') && (i+1<n)  )
                    {
                        room[i+1][j]='@';
                        iday[i+1][j]=day;
                     //   printf("??room[%d][%d]\n",i+1,j);
                    }
                    
                    if(  (room[i-1][j]=='.') && (i-1>=0)  )
                    {
                        room[i-1][j]='@';
                        iday[i-1][j]=day;
                     //   printf("??room[%d][%d]\n",i-1,j);
                    }
                    
                }
            }
 /*       for(i1=0;i1<n;i1++)
            for(j1=0;j1<n;j1++)
            {
                printf("%c",room[i1][j1]);
                if(j1==n-1)
                    printf("\n");
                else printf(" ");
            }
        printf("\n");         */
        
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(room[i][j]=='@')
                count++;
        }
    printf("%d\n",count);
    
}