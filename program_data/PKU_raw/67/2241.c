main()
{

    float c[1000];
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d%d",&b,&a);c[i-1]=(float)a/b;}
    for(i=1;i<=n-1;i++)
    {if(c[i]-c[0]>0.05) printf("better\n");
    else if(c[0]-c[i]>0.05) printf("worse\n"); 
    else  printf("same\n");
    
    
    }


    return 0;
}
