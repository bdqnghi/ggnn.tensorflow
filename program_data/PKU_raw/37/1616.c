int main()
{
    int n;
    cin>>n;
    char x;
    x=getchar();
    for(int i = 0 ; i < n ; i++)
    {
            char a[100010]={0},c[100010]={0};
            int b[30]={0};
            cin.getline(a,100010);
            int len=strlen(a);
            for(int j = 0 ; j < len ; j++)
            {
                    if(a[j]=='a')b[1]++;
                    if(a[j]=='b')b[2]++;
                    if(a[j]=='c')b[3]++;
                    if(a[j]=='d')b[4]++;
                    if(a[j]=='e')b[5]++;
                    if(a[j]=='f')b[6]++;
                    if(a[j]=='g')b[7]++;
                    if(a[j]=='h')b[8]++;
                    if(a[j]=='i')b[9]++;
                    if(a[j]=='j')b[10]++;
                    if(a[j]=='k')b[11]++;
                    if(a[j]=='l')b[12]++;
                    if(a[j]=='m')b[13]++;
                    if(a[j]=='n')b[14]++;
                    if(a[j]=='o')b[15]++;
                    if(a[j]=='p')b[16]++;
                    if(a[j]=='q')b[17]++;
                    if(a[j]=='r')b[18]++;
                    if(a[j]=='s')b[19]++;
                    if(a[j]=='t')b[20]++;
                    if(a[j]=='u')b[21]++;
                    if(a[j]=='v')b[22]++;
                    if(a[j]=='w')b[23]++;
                    if(a[j]=='x')b[24]++;
                    if(a[j]=='y')b[25]++;
                    if(a[j]=='z')b[26]++;
            }
            int flag=0;
            int tag=0;
            for(int j = 1 ; j <= 26 ; j++)
            {
                    if(b[j]==1)
                    {
                               if(j==1)c[tag]='a';
                               if(j==2)c[tag]='b';
                               if(j==3)c[tag]='c';
                               if(j==4)c[tag]='d';
                               if(j==5)c[tag]='e';
                               if(j==6)c[tag]='f';
                               if(j==7)c[tag]='g';
                               if(j==8)c[tag]='h';
                               if(j==9)c[tag]='i';
                               if(j==10)c[tag]='j';
                               if(j==11)c[tag]='k';
                               if(j==12)c[tag]='l';
                               if(j==13)c[tag]='m';
                               if(j==14)c[tag]='n';
                               if(j==15)c[tag]='o';
                               if(j==16)c[tag]='p';
                               if(j==17)c[tag]='q';
                               if(j==18)c[tag]='r';
                               if(j==19)c[tag]='s';
                               if(j==20)c[tag]='t';
                               if(j==21)c[tag]='u';
                               if(j==22)c[tag]='v';
                               if(j==23)c[tag]='w';
                               if(j==24)c[tag]='x';
                               if(j==25)c[tag]='y';
                               if(j==26)c[tag]='z';
                               flag=1,tag++;
                    }
            }
            if(flag==1)
            {
                for(int j = 0 ; j < len ; j++)
                {
                    for(int k = 0 ; k < tag ; k++)
                    {
                            if(a[j]==c[k])
                            {
                                          cout<<a[j]<<endl;
                                          k=tag,j=len;
                            }
                    }
                }
            }
            else cout<<"no"<<endl; 
    }
    return 0;
}