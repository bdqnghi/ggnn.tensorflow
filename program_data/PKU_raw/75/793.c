int p(int n)
{
    int sum=1;
    for(int i=0;i<n;i++)  sum=sum*10;
    return sum;
}
void change(int time[1001],char str[1001])
{
    int j=0,k=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
            if(str[i]!=',')
            {
                           time[k]=time[k]+(str[i]-'0')*p(j);
                           j++;
            }
            else
            {
                j=0;
                k++;
            }
    }
    return ;
}
int length(char str[100000])
{
    int count=1;
    for(int i=0;i<strlen(str);i++)
    {
            if(str[i]==',')
            count++;
    }
    return count;
}
int main()
{
    char str1[100000],str2[100000];
    cin>>str1>>str2;
    int time1[1000],time2[1000];
    memset(time1,0,sizeof(time1));  memset(time2,0,sizeof(time2));
    change(time1,str1);  change(time2,str2);
    int len1,len2;
    len2=len1=length(str1);
    cout<<len1<<' ';
    int time[1001];
    memset(time,0,sizeof(time));
    for(int i=0;i<len1;i++)
    {
            for(int j=time1[i];j<time2[i];j++)   time[j]++;
    }
    int max=0;
    for(int i=0;i<1001;i++)
    {
            if(max<time[i])  max=time[i];
    }
    cout<<max<<endl;
    return 0;
}
