int judge(char a[]);
int main()
{
    int n=0,i=0;
    char word[81];
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        cin.getline(word,81,'\n');
        cout<<judge(word)<<endl;
    }
    return 0;
}

int judge(char a[])
{
    int b=0,i=0;
    if(a[0]>64&&a[0]<91 || a[0]>96&&a[0]<123 || a[0]=='_') b=1;
    if(b==1)
      for(i=1;a[i]!='\0';i++)
       if(a[i]<48 || (a[i]>57&&a[i]<65) || (a[i]>90&&a[i]<97&&a[i]!=95) || (a[i]>122))
        b=0;
     return b;
}
