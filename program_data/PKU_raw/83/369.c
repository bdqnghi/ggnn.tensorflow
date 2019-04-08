int main(int argc,char *argv[])
{
    int n,sum=0,i,a[10];
    float b[10],gpa=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)scanf("%f",&b[i]);
    for(i=0;i<=n-1;i++)
    {
       if(b[i]>=90)b[i]=4.0;
          else if(b[i]>=85)b[i]=3.7;
               else if(b[i]>=82)b[i]=3.3;
                    else if(b[i]>=78)b[i]=3.0;
                         else if(b[i]>=75)b[i]=2.7;
                              else if(b[i]>=72)b[i]=2.3;
                                   else if(b[i]>=68)b[i]=2.0;
                                        else if(b[i]>=64)b[i]=1.5;
                                             else if(b[i]>=60)b[i]=1.0;
                                                  else b[i]=0.0;
                                                  }
    for(i=0;i<=n-1;i++)
    {
       sum+=a[i];
       b[i]*=a[i];
       gpa+=b[i];
       }
    gpa/=sum;
    printf("%.2f\n",gpa);
    return 0;
}    
