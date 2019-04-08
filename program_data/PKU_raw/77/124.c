int main()
{
    int i,j,num,n[100];
    char kids[100];
    scanf("%s",kids);
    num=strlen(kids);
    for(i=0;i<num;i++)
        n[i]=i;
    do{
        for(i=0;i<num;i++)
        {
                        if((kids[i]=='<' && kids[i+1]=='>')||(kids[i]=='(' && kids[i+1]==')') || (kids[i]=='{' && kids[i+1]=='}') ||(kids[i]=='[' && kids[i+1]==']'))
                        {
                                     printf("%d %d\n",n[i],n[i+1]);
                                     for(j=i;j<num-2;j++)
                                     {
                                             kids[j]=kids[j+2];
                                             n[j]=n[j+2];
                                     }
                                     num=num-2;
                                     i=i-2;
                        }
        }
    }while(num!=0);
    return 0;
}
