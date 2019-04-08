int main()
{
    int n,h,i,j,k,s,t,p;
    scanf("%d",&n);
    int a[n-1],c[n-1];
    char string[n-1][10],b[n-1][10];
    for(h=0;h<=n-1;h++)
    {
        scanf("%s %d",string[h],&a[h]);
    }
    for(p=0,j=0;p<=n-1;p++)
    {
        if(a[p]>=60)
        {
            c[j]=a[p];
            strcpy(b[j],string[p]);
            j++;
        }
    }
    for(k=1;k<=j;k++)
    { 
        for(s=1;s<=j;s++)
        {   
            for(i=0,t=0;i<j;i++)
            {
                if(c[s-1]>=c[i])
                    t++;
            }
            if(t==j)
            {
                printf("%s\n",b[s-1]);
                c[s-1]=0;
                break;
            }                                                                 
        }
    }
    for(i=0;i<n;i++)  
    { 
        if(a[i]<60)
            printf("%s\n",string[i]);
    }
    getchar();
    getchar();
}
