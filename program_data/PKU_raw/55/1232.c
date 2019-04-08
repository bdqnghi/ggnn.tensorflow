int main()
{
    int a,b,i,j,sum10=0,n10[100],nb[100],lenn,q;
    char n[100],nc[100];
    cin>>a>>n>>b;
    lenn=strlen(n);
    for(i=0;n[i]!='\0';i++)
    {
                           if((n[i]>='a')&&(n[i]<='z'))
                           {
                                                       n10[i]=n[i]-'a'+10;
                           }else if((n[i]>='A')&&(n[i]<='Z'))
                           {
                                 n10[i]=n[i]-'A'+10;                       
                           }else {n10[i]=n[i]-'0';}
                           for(j=1;j<=lenn-i-1;j++)
                           {
                                                   n10[i]=n10[i]*a;
                           }
                           sum10=sum10+n10[i];
    }
    if(sum10==0){cout<<0;}
    else
    {i=0;
    while(sum10!=0)
    {
                 nb[i]=sum10%b;
                 sum10=sum10/b;
                 i++;
    }
    for(j=i-1;j>=0;j--)
    {
                     if(nb[j]>9)
                     {
                                nc[j]=nb[j]-10+'A';
                     }else nc[j]=nb[j]+'0';
                     cout<<nc[j];
    }
    }
    cin>>q;
    return 0;
}
