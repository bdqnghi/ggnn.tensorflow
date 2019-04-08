int main()
{
    int i,n,count=0;
    char a[301][500];
    int b[301];
    for(i=0;i<300;i++)
    {
                      scanf("%s",a[i]);
                      n=strlen(a[i]);
                      b[i]=n;
                      count++;
                      if(n==0)
                      break;
    }
    for(i=0;i<count-1;i++)
    {
                        if(i==0)
                        printf("%d",b[i]);
                        else
                        printf(",%d",b[i]);
    }
    return 0;
}