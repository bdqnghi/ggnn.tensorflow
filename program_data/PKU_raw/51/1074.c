int main()
{
    char c[500];
    int len, n, i, j, k, l=0, m, cd[500], ld, max=0;
    
    scanf("%d", &n);
    scanf("%s", c);
    len = strlen(c);
    
    for(i=0; i<500; i++)
        cd[i] = 1;
    for(i=0; i<len-n; i++)
    {
        for(j=i+1; j<len-n+1; j++)
        {
            ld = 0;     
            for(k=0; k<n; k++)
            {
                if(c[i+k] == c[j+k])
                    continue;
                else
                {
                    ld++;
                    break;
                }     
            }  
            if(ld==0)
                cd[i]++;       
        }     
    } 
    for(i=0; i<500; i++)
    {
        if(max < cd[i])
            max = cd[i];     
    }
    if(max == 1)
        printf("NO\n");
    else
    {
        printf("%d\n", max);
        for(i=0; i<500; i++)
        {
            if(cd[i] == max)
            {
                for(j=i; j<i+n; j++)
                    printf("%c", c[j]);
                printf("\n");         
            }            
        }
     }
        
       
    
    

    return 0;
}