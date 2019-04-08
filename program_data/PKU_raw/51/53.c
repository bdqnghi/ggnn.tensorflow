
int main()
{
    int n;
    int i,j;
    char a[N];
    int max,num;
    int cmp(char *x,char *y,int z);

    scanf("%d",&n);
    scanf("%s",a);

    for(i=0,max=0; a[i+n-1]!='\0'; i++)
    {
        for(j=i,num=0; a[j+n-1]!='\0'; j++)
        {
            if(cmp(&a[i],&a[j],n)==1)
            {
                num++;
            }
        }
        if(num>max)
        {
            max=num;
        }
    }

    if(max==1)
    {
        printf("NO\n");
    }

    else
    {
        printf("%d\n",max);

        for(i=0; a[i+n-1]!='\0'; i++)
        {
            for(j=i,num=0; a[j+n-1]!='\0'; j++)
            {
                if(cmp(&a[i],&a[j],n)==1)
                {
                    num++;
                }
            }
            if(num==max)
            {
                for(j=0; j<n; j++)
                {
                    printf("%c",a[i+j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}


int cmp(char *x,char *y,int z)
{
    int i;

    for(i=0; i<z; i++)
    {
        if(*(x+i)!=*(y+i))
        {
            return 0;
        }
    }
    if(i==z)
    {
        return 1;
    }
}