int main()
{
    int o=0;
    int a=0,b=0,c=0,d=0,e=0;
    e=1;d=1;
    a=0;b=0;c=0;d=0;
    for(a=1;a<=5;a++)
    {
        if(o==1) break;
        if(d==1) continue;
        if(a==e) continue;
        for(b=1;b<=5;b++)
        {
            if(o==1) break;
            if(d==1) continue;
            if(b==e) continue;
            if(b==a) continue;
            for(c=1;c<=5;c++)
            {
                if(o==1) break;
                if(d==1) continue;
                if(c==e) continue;
                if(c==b) continue;
                if(c==a) continue;
                for(d=1;d<=5;d++)
                {
                    if(o==1) break;
                    if(d==1) continue;
                    if(d==e) continue;
                    if(d==c) continue;
                    if(d==b) continue;
                    if(d==a) continue;

                    if(a==1&&e==1)
                    {
                        if(b==2&&a!=5&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(c==2&&b!=2&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&a!=5&&c!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(b==1&&b==2)
                    {
                        if(e!=1&&a!=5&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(c==1&&a==5)
                    {
                        //printf("%d!!!\n",o);
                        if(b==2&&e!=1&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(a==2&&e==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&c==1&&b!=2&&e!=1&&a!=5) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                }
            }
        }
    }

    e=4;
    a=0;b=0;c=0;d=0;
    for(a=1;a<=5;a++)
    {
        if(o==1) break;
        if(d==1) continue;
        if(a==e) continue;
        for(b=1;b<=5;b++)
        {
            if(o==1) break;
            if(d==1) continue;
            if(b==e) continue;
            if(b==a) continue;
            for(c=1;c<=5;c++)
            {
                if(o==1) break;
                if(d==1) continue;
                if(c==e) continue;
                if(c==b) continue;
                if(c==a) continue;
                for(d=1;d<=5;d++)
                {
                    if(o==1) break;
                    if(d==1) continue;
                    if(d==e) continue;
                    if(d==c) continue;
                    if(d==b) continue;
                    if(d==a) continue;

                    if(a==1&&e==1)
                    {
                        if(b==2&&a!=5&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(c==2&&b!=2&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&a!=5&&c!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(b==1&&b==2)
                    {
                        if(e!=1&&a!=5&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(c==1&&a==5)
                    {
                        //printf("%d!!!\n",o);
                        if(b==2&&e!=1&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(a==2&&e==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&c==1&&b!=2&&e!=1&&a!=5) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                }
            }
        }
    }
    e=5;
    a=0;b=0;c=0;d=0;
    for(a=1;a<=5;a++)
    {
        if(o==1) break;
        if(d==1) continue;
        if(a==e) continue;
        for(b=1;b<=5;b++)
        {
            if(o==1) break;
            if(d==1) continue;
            if(b==e) continue;
            if(b==a) continue;
            for(c=1;c<=5;c++)
            {
                if(o==1) break;
                if(d==1) continue;
                if(c==e) continue;
                if(c==b) continue;
                if(c==a) continue;
                for(d=1;d<=5;d++)
                {
                    if(o==1) break;
                    if(d==1) continue;
                    if(d==e) continue;
                    if(d==c) continue;
                    if(d==b) continue;
                    if(d==a) continue;

                    if(a==1&&e==1)
                    {
                        if(b==2&&a!=5&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(c==2&&b!=2&&c==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&a!=5&&c!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(b==1&&b==2)
                    {
                        if(e!=1&&a!=5&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                    if(c==1&&a==5)
                    {
                        //printf("%d!!!\n",o);
                        if(b==2&&e!=1&&c==1&&d!=1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(a==2&&e==1) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                        if(d==2&&c==1&&b!=2&&e!=1&&a!=5) {printf("%d %d %d %d %d",a,b,c,d,e);o=1;break;}
                    }
                }
            }
        }
    }


}

