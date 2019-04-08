main()
{
    char a[101],q[101];
    int i=0,rem=0,d=0,b[101];
    scanf("%s",a);
    if(a[1]=='\0') printf("0\n%c",a[0]);
    else if(((a[0]-'0')*10+a[1]-'0'<13)&&a[2]=='\0')
    printf("0\n%s",a);
    else{
    b[0]=10*(a[0]-'0')+a[1]-'0';
    for(i=0;i<=strlen(a)-2;i++)
    {
        q[i]=(b[i]/13)+'0';
        rem=b[i]%13;
   /*     printf("%c,%d\n",q[i],b[i]);        */
        b[i+1]=a[i+2]+rem*10-'0';
        }
     q[strlen(a)-1]='\0';
     if(q[0]=='0')
        {
            for(i=0;q[i]!='\0';i++)
            {
                  q[i]=q[i+1];
                  }
        }
    printf("%s\n",q);
    printf("%d",rem);}
}
