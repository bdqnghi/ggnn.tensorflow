char boy,girl;
void game(char a[1000])
{
     int i,j,b,g;
     for(i=0;i<1000;i++)
     if(a[i]==girl){for(j=i;j>=0;j--)if(a[j]==boy)break;break;}
     b=j;g=i;
     cout<<b<<' '<<g<<endl;
     a[i]=0;a[j]=0;
     if(a[0]!=0)game(a);
}
int main()
{
    char a[1000]={0};
    int i;
    cin>>a;
    boy=a[0];
    for(i=0;i<1000;i++)if(a[i]!=boy){girl=a[i];break;}
    game(a);
    getchar();getchar();
    return 0;
}
