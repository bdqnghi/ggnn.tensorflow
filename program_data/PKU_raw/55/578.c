
int main()
{
    int a,b,i;
    char num[100];
    long sum=0;
    int temp;
    char ans[100];
    scanf("%d %s %d",&a,num,&b);
    int len;
    len=strlen(num);
    for(i=0;i<len;i++)
    {
        if((num[i]>='0')&&(num[i]<='9')){sum*=a;sum+=num[i]-'0';}
        if((num[i]>='A')&&(num[i]<='Z')){sum*=a;sum+=num[i]-'A'+10;}
        if((num[i]>='a')&&(num[i]<='z')){sum*=a;sum+=num[i]-'a'+10;}
    }
    for(i=0;;i++)
    {
        temp=sum%b;
        sum=sum/b;
        if(temp<10)ans[i]=temp+'0';
        else ans[i]=temp-10+'A';
        if(sum==0)break;
    }
    for(int j=i;j>=0;j--)
    {
        printf("%c",ans[j]);
    }


        
        





    return 0;
}


        
    