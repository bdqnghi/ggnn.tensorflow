main()
{
    int a1[251], b1[251], c[251];
    int i, i1, i2, j1, j2, j3, j4, j5, c1, c2, jinwei, head;
    char a[251], b[251];
    
    scanf("%s", a);
    scanf("%s", b);
    c1 = strlen(a);  c2 = strlen(b);
    a1[0] = b1[0] = 0;
    for(i1=1; i1<=c1; i1++)
        a1[i1] = a[i1-1] - '0';
    for(i2=1; i2<=c2; i2++)
        b1[i2] = b[i2-1] - '0';
    if(c1 >= c2)
    {
        for(i=c1; i>=c1-c2+1; i--)
            b1[i] = b1[i-c1+c2];
        for(j1=c1-c2; j1>=1; j1--)
            b1[j1] = 0;
        jinwei = 0;
        for(j2=c1; j2>=0; j2--)
        {
            c[j2] = a1[j2] + b1[j2] + jinwei;
            jinwei = 0;
            if(c[j2] >= 10)
            {
                c[j2] = c[j2] - 10;
                jinwei++;    
            }        
        } 
        head = 0;
        for(j4=0; j4<=c1; j4++)
            if(c[j4] != 0)
                {
                    head = j4;
                    break; 
                }
        if(head==0 && c[0] == 0)
             printf("0");
        else
        {
            for(j3=head; j3<=c1; j3++)
                printf("%d", c[j3]);
            printf("\n");
        }
    }
    else
    {
        for(i=c2; i>=c2-c1+1; i--)
            a1[i] = a1[i-c2+c1];
        for(j1=c2-c1; j1>=1; j1--)
            a1[j1] = 0;
        jinwei = 0;
        for(j2=c2; j2>=0; j2--)
        {
            c[j2] = a1[j2] + b1[j2] + jinwei;
            jinwei = 0;
            if(c[j2] >= 10)
            {
                c[j2] = c[j2] - 10;
                jinwei++;    
            }        
        } 
        head = 0;
        for(j4=0; j4<=c2; j4++)
            if(c[j4] != 0)
                {
                    head = j4;
                    break; 
                }
        if(head==0 && c[0]==0)
             printf("0");
        else
        {
            for(j3=head; j3<=c2; j3++)
                printf("%d", c[j3]);
            printf("\n");
        }
    }    
              
        return 0;
}