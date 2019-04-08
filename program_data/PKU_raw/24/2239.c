int main()
{
    char c[5000],temp[20]={'\0'},min[20],max[20];
    int i,j,flag=0;
    gets(c);
    for(i=0;i<=20;i++)
        {
        if(c[i]==' '||c[i]==','||c[i]=='\0')
        {min[i]='\0';max[i]='\0';break;}
        min[i]=c[i];
        max[i]=c[i];
        }
    i++;
    if(c[i-1]!='\0')for(;i<=5000;i++)
        {
        for(j=0;j<=500;j++)
        {
        if(j==0&&(c[i+j]==' '||c[i+j]==','||c[i+j]=='\0'))
        continue;
        if(c[i+j]==' '||c[i+j]==','||c[i+j]=='\0')
        {
        temp[j]='\0';
        if (strlen(temp)>strlen(max))
            strcpy(max,temp);
        else if(strlen(temp)<strlen(min))
            strcpy(min,temp);
        if(c[i+j]=='\0')
        flag=1;
        i=i+j;
        break;
        }
        else temp[j]=c[i+j];
        }
        if(flag==1)
        break;
        }

        printf("%s\n",max);
        printf("%s",min);
    return 0;
}
