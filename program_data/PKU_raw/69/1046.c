int main()
{
    int la,lb,lm,ln,temp=0,i;
    char a[250],b[250];
    int c[251];
    scanf("%s",a);
    scanf("%s",b);
    la=strlen(a);
    lb=strlen(b);
    if(la>lb) {lm=la;ln=lb;}
    else {lm=lb;ln=la;}
    for(i=1;i<=lm;i++)
    {
        if(i>ln&&ln==lb)
        {
            temp=a[la-i]+temp-'0';
            c[lm+1-i]=temp%10;
            if(temp>=10) temp=temp/10;
            else temp=0;
        }
        else if(i>ln&&ln==la)
        {
            temp=b[lb-i]+temp-'0';
            c[lm+1-i]=temp%10;
            if(temp>=10) temp=temp/10;
            else temp=0;
        }
        else
        {
            temp=a[la-i]+b[lb-i]+temp-'0'-'0';
            c[lm+1-i]=temp%10;
            if(temp>=10) temp=temp/10;
            else temp=0;
        }
    }
    c[0]=temp;
    for(i=0;i<=lm;i++)
    {
        if(c[i]!=0) break;
        if(i==lm&&c[i]==0) printf("0");
    }
    for(;i<=lm;i++) printf("%d",c[i]);
    return 0;
}