int main()
{
    int a[10][10],h,d,i,j,k,max,l1,min,l2,real;
    char c;
    scanf("%d%c%d",&h,&c,&d);
    for(i=0;i<h;i++)
    { 
                    for(j=0;j<d;j++)
                    scanf("%d",&a[i][j]); 
    }    
    real=0;
    for(i=0;i<h;i++)
    {
                    max=0;
                    for(j=0;j<d;j++)
                    {
                                    if(a[i][j]>max)
                                    {
                                                   max=a[i][j];
                                                   l1=j;
                                    }
                    }
                    for(k=0;k<h;k++)
                    {
                                    if(k==0) 
                                    {
                                             min=a[k][l1];
                                             l2=k;
                                    }
                                    if((a[k][l1]<min)&&(k>0))
                                    {
                                                    min=a[k][l1];
                                                    l2=k;
                                    }        
                    }
                    if(max==min)
                    {
                                printf("%d+%d",l2,l1);
                                real=1;
                                break;
                    }
    }
    if(real==0) printf("No");
    
    return 0;
}
