
int main()
{
    int n, i, j;
    scanf("%d", &n);
    
    /* initialization */
    char **r_matrix = (char **)malloc(sizeof(char *) * n);
    for(i = 0; i < n; ++i)
    {
        r_matrix[i] = (char *)malloc(sizeof(char) * n);
        for(j = 0; j < n; ++j)
        {
            if(i == j)
                r_matrix[i][j] = 1;
            else
                r_matrix[i][j] = 0;
        }
    }

    /* input */
    while(1)
    {
        scanf("%d %d", &i, &j);
        if(!( i || j ))
            break;
        r_matrix[i][j] = 1;
    }

    int vip = 0, not_found = 0;
    for(i = 0; i < n; ++i)
        if(r_matrix[vip][i])
            vip = i;
    
    for(i = 0; i < vip; ++i)
    {
        if(i == vip)
            continue;
        if(!(r_matrix[i][vip] && !r_matrix[vip][i]))
        {
            not_found = 1;
            break;
        }
    }
    if(not_found)
        printf("NOT FOUND\n");
    else
        printf("%d\n", vip);

    for(i = 0; i < n; ++i)
        free(r_matrix[i]);
    free(r_matrix);
    return 0;
}
