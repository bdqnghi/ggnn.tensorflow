int cont=1;        //???????????????????? 
char a[100];
char x,y;
int main()
{
    int i;
    int out(int len); 
    int len;       //a??? 
    cin.getline(a,100);
    len=strlen(a);
    x=a[0];
    for(i=1;i<len;i++)
        if(a[i]!=x)break;
    y=a[i];
    out(len);
    return 0;
}

int out(int len)
{
    if(len==cont*2){cout<<0<<" "<<len-1;return 1;}  //?????????????? 
    int i,j;
    for(i=1;i<len-2;i++)  //????? 
            {if(a[i]==x&&a[i+1]==y)
                    {cout<<i<<" "<<i+1<<endl;  //??????????? 
                     a[i]=0;a[i+1]=0;                                    //a?i??a?i+1????? 
                     cont++;
                     break;}           //?????? 
             if(a[i]==x&&a[i+1]==0)         //????0 0 0??? 
                    {for(j=i+1;j<len-1;j++)     //?a?j???a?i???????0??? 
                            if(a[j]!=0)break;
                     if(a[j]==y){cout<<i<<" "<<j<<endl;
                                   a[i]=0;a[j]=0;
                                   cont++;break;}
                     }
             }                 
    out(len);     //???????????? 
}
