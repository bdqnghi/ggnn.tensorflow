int main()
{
    int a;
    scanf("%d\n",&a);
    if(a==1)printf("End\n");
    else
    {
        do
        {
                            x:
               if(a%2==0) printf("%d/2=%d\n",a,a/2),a=a/2;
               else printf("%d*3+1=%d\n",a,a*3+1),a=a*3+1;
               if(a==1)goto y;
               else goto x;
        }
        while(a=1);
    y:
    printf("End\n");
}
return 0;
} 
