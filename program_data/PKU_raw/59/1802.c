int main()
{
char a[100][100];
memset(a,'.',sizeof(a));
int n;cin>>n;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
int day;cin>>day;
while(day>1)
{day=day-1;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{
       if(a[i][j]=='.')
       {
                       if((i-1>=0&&a[i-1][j]=='@')||(i+1<n&&a[i+1][j]=='@')||(j-1>=0&&a[i][j-1]=='@')||(j+1<n&&a[i][j+1]=='@'))   a[i][j]='!';
                       }
                       }
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{if(a[i][j]=='!') a[i][j]='@';}

}
int sum=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{if(a[i][j]=='@') sum+=1;}
cout<<sum;

    return 0;
}
