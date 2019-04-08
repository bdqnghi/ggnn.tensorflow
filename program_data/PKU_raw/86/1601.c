int main()
    {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
        int m;
        scanf("%d",&m);
        int t[m];
        if(m==0)
           {printf("%d\n",60);
           continue;}
        for(int j=0;j<m;j++)
            {
            scanf("%d",&t[j]);  
            } 
		if(3*m+t[m-1]<=60)
               printf("%d\n",60-3*m);
            else
               if(3*(m-1)+t[m-1]<=60)
                  printf("%d\n",t[m-1]);
               else
                  if(3*m+t[m-2]<=60)
                    printf("%d\n",60-3*(m-1));
                  else
                    if(3*(m-2)+t[m-2]<=60)
                       printf("%d\n",t[m-2]);
                    else
                       printf("%d\n",60-3*(m-2));
        }
    return(0);
    }