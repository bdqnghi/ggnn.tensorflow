int main()
{
    struct sub
    {
           char a[5];
           int counter;
    }sub[500],*p1=sub,*p2;
    int i,j,k,n,len,counter=0,mark,flag,max=0;
    char str[501],*pstr1,*pstr2;
    scanf("%d",&n);
    scanf("%s",&str);
    len=strlen(str);
    pstr2=str;
    for(i=0;i<len+1-n;i++)
    {
                          pstr1=(p1+i)->a;
                    for(j=0;j<n;j++)
                    {
                                      *(pstr1+j)=*(pstr2+i+j);
                    }
                    *(pstr1+n)='\0';
                    counter++;
    }
    for(i=0;i<counter;i++)
    {
                          mark=1;
                          pstr1=(p1+i)->a;
                          for(j=i+1;j<counter;j++)
                          {
                                                  pstr2=(p1+j)->a;
                                                  flag=0;
                                                  for(k=0;k<n;k++)
                                                  {
                                                                  if(*(pstr1+k)==*(pstr2+k))
                                                                  flag++;
                                                  }
                                                  if(flag==n)
                                                  mark++;
                          }
                          if(mark>max)
                          max=mark;
                          (p1+i)->counter=mark;
    }
    if(max==1)
    printf("NO");
    else
    {
        printf("%d\n",max);
        for(i=0;i<counter;i++)
        if((p1+i)->counter==max)
        printf("%s\n",(p1+i)->a);
    }
    return 0;
}