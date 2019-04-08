main()
{
    char n[102],r[102];
    int b[102],m,i;
    scanf("%s",n);
    if(n[1]=='\0') printf("0\n%s",n);


    else
    {
    if(   ((n[0]-'0')*10+n[1]-'0'<13)&&n[2]=='\0'   )
    {printf("0\n%s",n);}

    else
    {

    b[0]=10*(n[0]-'0')+n[1]-'0';

    for(i=0;i<=strlen(n)-2;i++)
    {
        r[i]=(b[i]/13)+'0';
        m=b[i]%13;
        b[i+1]=n[i+2]+m*10-'0';
    }

    r[strlen(n)-1]='\0';

     if(r[0]=='0')
        {
            for(i=1;i<=strlen(n)-2;i++)
            {
            printf("%c",r[i]);
            }
         printf("\n%d",m);  
        }
    else
    {
    printf("%s\n",r);
    printf("%d",m);
    }
   }
}

getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}