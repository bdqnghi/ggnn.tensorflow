int main()
{
    int n;
    char word[40],max[40],min[40];
    int j,i;
    scanf("%d",&n);
    scanf("%s",max);
    strcpy(min,max);
    for(i=1;i<n;i++)
    {
        scanf("%s",word);
        if(strlen(word)>strlen(max))strcpy(max,word);
        if(strlen(word)<strlen(min))strcpy(min,word);
    }
    printf("%s\n",max);
    printf("%s",min);

}