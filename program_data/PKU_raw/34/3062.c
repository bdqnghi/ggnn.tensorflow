int main()
{
    int a,b;
    scanf("%d",&a);
    if(a==1)
    printf("End");
    else
    {do
       {
                   if (a%2==0)
                   {b=a/2;
                   printf("%d/2=%d\n",a,b);
                   a=b;}
                   else
                  { b=a*3+1;
                   printf("%d*3+1=%d\n",a,b);
                   a=b;}
}
     while(a>1);
printf("End");
}
getchar();
getchar();
getchar();
getchar();
getchar();
}
