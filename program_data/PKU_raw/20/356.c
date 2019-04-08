int main()
{char str[20],sub[10];
 int max,i,j;
 while(scanf("%s%s",str,sub)!=EOF)
  {
    j=strlen(str);max=0;
    for(i=1;str[i];i++)
    if(str[i]>str[max])max=i;
    for(i=j;i>max;i--)
    str[i+3]=str[i];
    for(i=0;i<3;i++)
    str[max+i+1]=sub[i];
    printf("%s\n",str);
  } 
}
