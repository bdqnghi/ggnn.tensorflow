int main ()
{
    char a[100];
    int b[100];
    int c[100];
    int i,j,k;
    int t=0; 
    scanf("%s",a);
    if(a[1]=='\0'||(a[2]=='\0'&&(10*(a[0]-'0')+a[1]-'0'<13)))
    {printf("%d\n",t);
    printf("%s",a);}
    else{b[1]=(10*(a[0]-'0')+1*(a[1]-'0'))%13;
    c[1]=(10*(a[0]-'0')+1*(a[1]-'0'))/13;
    for(i=2,j=2;i<=100;)
    {            if(a[i]!='\0')
              {
                 b[j]=(10*b[j-1]+a[i]-'0')%13;
                 c[j]=(int)((10*b[j-1]+a[i]-'0')/13);
                 i=i+1;
                 j=j+1;
                 }
                 else
                 break;
                 }
            
                if(c[1]!=0)
                printf("%d",c[1]);
                for(k=2;k<=j-1;k++)
                {
                                   printf("%d",c[k]);
                }
                 printf("\n");
                printf("%d",b[j-1]);}
                getchar();
                getchar();
                }
         