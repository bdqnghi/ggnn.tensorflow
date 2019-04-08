int main()
{   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int w,i,j,k;
    scanf("%d",&w);
    j=12;
    if((w+j)%7==5)
    printf("1\n");
    for(i=1;i<12;i++)
    {
        j=j+a[i-1];             
        if((w+j)%7==5)
        printf("%d\n",i+1);             
                     
                     
    }


    
return 0;    
    
}
