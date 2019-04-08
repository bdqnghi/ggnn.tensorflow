main()
{
    char a[100];
    char b[100];
    int i,length,n;
    gets(a);
    length=strlen(a);
    if((length==1)||((length==2)&&(a[0]=='1')&&(a[1]<'3')))
    {
        printf("0\n");
        puts(a);
    }
    else
    {


                                                               //the main part of calculation


        if(((a[0]=='1')&&(a[1]<'3'))!=0)
        {
            for(i=0;i<length-1;i++)
        {
            b[i]=(10*(a[i]-'0')+a[i+1]-'0')/13+'0';
            a[i+1]=(10*(a[i]-'0')+a[i+1]-'0')-13*(b[i]-'0')+'0';
        }
            for(i=1;i<length-1;i++)
            {
                printf("%c",b[i]);

            }
            printf("\n%d",a[length-1]-'0');                //don't print zero( b[0]=0)

        }
        else
        {
           for(i=0;i<length-1;i++)
        {
            b[i]=(10*(a[i]-'0')+a[i+1]-'0')/13+'0';
            a[i+1]=(10*(a[i]-'0')+a[i+1]-'0')-13*(b[i]-'0')+'0';
        }
            for(i=0;i<length-1;i++)
            {
                printf("%c",b[i]);
            }
            printf("\n%d",a[length-1]-'0');                //normally print

        }


    }
}
