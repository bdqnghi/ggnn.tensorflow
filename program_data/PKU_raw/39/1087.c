int main()
{
    struct jiangxuejin
    {
        char name[20],s1,s2;
        int qimo,banji,lunwen;
    }s[100];
    int n,i,b,jiangjin[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d\n",&s[i].name,&s[i].qimo,&s[i].banji,&s[i].s1,&s[i].s2,&s[i].lunwen);
    }
    for (i=0;i<n;i++)
    {
        b=0;
        if (s[i].qimo>80&&s[i].lunwen>=1)
        {
            b+=8000;
        }
        if (s[i].qimo>85&&s[i].banji>80)
        {
            b+=4000;
        }
        if (s[i].qimo>90)
        {
            b+=2000;
        }
        if (s[i].qimo>85&&s[i].s2=='Y')
        {
            b+=1000;
        }
        if (s[i].banji>80&&s[i].s1=='Y')
        {
            b+=850;
        }
        jiangjin[i]=b;
    }
    int largest=0,sum=0;
    for (i=0;i<n;i++)
    {
        if (jiangjin[i]>=largest)
        {
            largest=jiangjin[i];
        }
        sum+=jiangjin[i];
    }
    for (i=0;i<n;i++)

    {
        if (jiangjin[i]==largest)
        {
            printf("%s\n",s[i].name);
            printf("%d\n",largest);
            printf("%d",sum);
            break;
        }
    }
    return 0;
}