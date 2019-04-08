void line(int n,float *p);
int main()
{
    struct people
    {
           char gender[10];
           float tall;
    };
    struct people people[45];
    int n,i,j,k,flag;
    j=k=0;flag=1;
    float m[45],f[45];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%s %f",&people[i].gender,&people[i].tall);
    for(i=0;i<n;i++)
    {
                    if(people[i].gender[0]=='m')
                    {
                                                m[j]=people[i].tall;j++;
                    }
                    else 
                    {
                         f[k]=people[i].tall;k++;
                    }
    }
    line(j,m);
    line(k,f);
    for(i=0;i<j;i++)
    {
                    if(flag)
                    {
                            printf("%.2f",m[i]);flag=0;
                    }
                    else printf(" %.2f",m[i]);
    }
    for(i=k-1;i>=0;i--)printf(" %.2f",f[i]);
    return 0;
}
void line(int n,float *p)
{
     int i,j;
     float k;
     for(i=0;i<n-1;i++)
     {
                     for(j=0;j<n-1-i;j++)
                     {
                                       if(p[j]>p[j+1])
                                       {
                                                      k=p[j];
                                                      p[j]=p[j+1];
                                                      p[j+1]=k;
                                       }
                     }
     }
}