
void main()
{
    int m=0,i=0,j=0;
    char a[100][10],b;
    while(i<100)
    {scanf("%s",a[i++]);
    scanf("%c",&b);
    m++;
    if(b=='\n')
                        break;
    }
    for(i=1;i<=m-1;i++)
    {
    j=m-i;
    printf("%s ",a[j]);
    }
    printf("%s",a[0]);
    
    

  return 0;
}
