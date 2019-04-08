int main()
{
    int n;
    char sex[7];
    float high[40];
    float male[40];
    float female[40];
    float temp;
    int m=0,f=0;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s%f",sex,&high[i]);
                    if(sex[0]=='m')
                    male[m++]=high[i];
                    else
                    female[f++]=high[i];
    }
    
    for(i=1;i<m;i++)
    for(j=1;j<m-i+1;j++)
    if(male[j-1]>male[j])
    {
                         temp=male[j-1];
                         male[j-1]=male[j];
                         male[j]=temp;
    }
    for(i=1;i<f;i++)
    for(j=1;j<f-i+1;j++)
    if(female[j-1]>female[j])
    {
                         temp=female[j-1];
                         female[j-1]=female[j];
                         female[j]=temp;
    }

    for(i=0;i<m;i++)
    printf("%.2f ",male[i]);

    for(i=f-1;i>=0;i--)
    {printf("%.2f",female[i]);
    if((i)!=0)
    printf(" ");}
    getchar();
    getchar();
    getchar();
    return 0;
    
    }
