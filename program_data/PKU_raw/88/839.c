void main()
{
 char *p;
 int i;
 p=(char *)malloc(31*sizeof(char));
 for(i=0;i<31;i++)
    scanf("%c",(p+i));
 for(i=0;i<31;i++)
    {
     if((*(p+i)!='0')&&(*(p+i)!='1')&&(*(p+i)!='2')&&(*(p+i)!='3')&&(*(p+i)!='4')&&(*(p+i)!='5')&&(*(p+i)!='6')&&(*(p+i)!='7')&&(*(p+i)!='8')&&(*(p+i)!='9'))
     printf("\n");
     else
     printf("%c",*(p+i));
    }
}