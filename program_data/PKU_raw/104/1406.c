
void main()
{
    int a1,b1,i,j;
    int k=0;
    int a[20]={0},b[20]={0};
    scanf("%d%d",&a1,&b1);
    for (i=0; a1!=0||b1!=0; a1/=2,b1/=2)
    {
        a[i]=a1;
        b[i]=b1;
        i++;
    }
    for (i=0; a[i]!=0; i++)
    {
        for (j=0; b[j]!=0; j++)
        {
            if (b[j]==a[i])
            {
                k=1;break;
            }
        }
        if (k==1)
        {
            break;
        }
    }
    printf("%d",b[j]);
    
}