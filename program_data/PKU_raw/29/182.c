int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    int a,b[10000],num=1,j=2;
                    double s=2.0;
                    scanf("%d",&a);
                    b[0]=1;
                    b[1]=2;
                    while(1)
                    {
                             if(num==a)
                            {
                                      printf("%.3lf\n",s);
                                      break;
                            }
                            b[j]=b[j-1]+b[j-2];
                            s+=(double)(b[j])/b[j-1];
                            num++;
                            j++;
                           
                    }
    }                                                                     
    return 0;
}
