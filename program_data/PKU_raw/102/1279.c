int cmp(const void* a,const void* b)
{
    return (*(float*)a) > (*(float*)b) ? 1:-1;
}
int main()
{
    int n,i,f,m;
    char sex[10];
    float male[40]={0},female[40]={0};
    scanf("%d",&n);
    for(i=0,f=0,m=0;i<n;i++)
    {
                    scanf("%s",sex); 
                    if(sex[0]=='m')
                    {
                                   scanf("%f",&male[m]);
                                   m++;
                    }
                    else
                    {
                        scanf("%f",&female[f]);
                        f++;
                    }
    }
    qsort(male,m,sizeof(float),cmp);
    qsort(female,f,sizeof(float),cmp);
    for(i=0;i<m;i++)
                    printf("%.2f ",male[i]);
    for(i=f-1;i>0;i--)
                      printf("%.2f ",female[i]);
    printf("%.2f\n",female[i]); 
    return 0;
}
