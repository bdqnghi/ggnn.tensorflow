int main()
{
    char a[40];
    int i=0;
    cin.getline(a,40);
    while(a[i]!='\0')
    {
       if((a[i]-'0')>=0&&(a[i]-'0'<=9)) cout<<a[i];
       else
       {
           if((a[i+1]-'0')>=0&&(a[i+1]-'0'<=9)) cout<<endl;
       }
       i++;
    }
    return 0;
}