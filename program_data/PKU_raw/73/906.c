main()
{
     int a,b,c,d,e,f;
     int x[5][5];
     f=0;
     for(a=0;a<=4;a++)
     {
            for(b=0;b<=4;b++)
            {
                scanf("%d",&x[a][b]);
            }
        }
      for(a=0;a<=4;a++)
      {
            for(b=0;b<=4;b++)
            {
                d=0;
                for(c=0;c<=4;c++)
                {
                    if(x[a][b]>=x[a][c])
                    d++;
                    else;
                }
                if(d==5)
                break;
                else;
            }
            e=0;
            for(c=0;c<=4;c++)
            {
                if(x[a][b]<=x[c][b])
                e++;
                else;
            }
            if(e==5)
            {
                printf("%d %d %d\n",a+1,b+1,x[a][b]);
                f=1;
            }
            else;
        }
        if(f==0)
        printf("not found");
        else;
}