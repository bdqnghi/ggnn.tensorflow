int main()
{
char x[500][50]={0};
    int i,j,m,k,total,temp,y[500];
    scanf("%d",&k);
    temp=k;
    for(i=0;i<=k-1;i++)
    scanf("%s",x[i]);
    for(i=0;i<=k-1;i++)
    y[i]=strlen(x[i]);
    for(i=0;;)
    {
                 printf("%s",x[i]);
                 total=y[i];
                 temp--;
                 for(j=i+1;;j++)
                 {
                                total=total+y[j]+1;
                                if(total>80) break;
                                temp--;
                                if(temp==0) break;
                 }
                 if(temp!=0)
                 {
                 for(m=i+1;m<=j-1;m++)
                 printf(" %s",x[m]);
                 printf("\n");
                 i=j;
                 }
                 else 
                 {
                      for(m=i+1;m<=k-1;m++)
                      printf(" %s",x[m]);
                      printf("\n");
                      break;
                 }
    }
return 0;
}