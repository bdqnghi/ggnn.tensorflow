main()
{   
    char str[1000];
    int a[1000]={0},i,n,t=1;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
    if((str[i]>=97)&&(str[i]<=122)) 
    str[i]=str[i]-32;                         
    }
    for(n=0;str[n]!='\0';n++)
    {
    
    if(str[n]==str[n+1])
    t=t+1;
    else
    {
    printf("(%c,%d)",str[n],t);
    t=1;
    }
    }
    
}

