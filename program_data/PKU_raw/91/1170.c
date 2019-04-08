int main()
{
    char s1[1000],s2[1000]={0},temp[1000];
    int i,num[1000];
    while(0==0)
                 {
                            scanf("%s",temp);
                            if(getchar()==' ')
                            {
                            strcat(s1,temp);
                            s1[strlen(s1)]=' ';
                            }
                            else
                            {
                                strcat(s1,temp);
                                break;
                            }
                 }
    for(i=0;i<strlen(s1);i++)
    num[i]=s1[i];
    for(i=0;i<strlen(s1)-1;i++)
    s2[i]=num[i]+num[i+1];
    s2[strlen(s1)-1]=num[strlen(s1)-1]+num[0];
    printf("%s",s2);
    return 0;
}