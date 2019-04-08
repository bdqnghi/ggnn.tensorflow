int main()
{
    int print(char m[]);
    int n;
    char a[81],ch;
    cin>>n;
    ch=cin.get();        //????????? 
    for(int j=0;j<n;j++)
    {
      cin.getline(a,81); //????????????? 
      cout<<print(a)<<endl;
    }
    return 0;
}
int print(char m[])   //????????? 
{                      //??????1??????0 
    if(!((m[0]=='_')||(m[0]>64&&m[0]<91)||(m[0]>96&&m[0]<123)))return 0;
    int i=1;
    while(m[i]!='\0')
    {
      if(!((m[i]=='_')||(m[i]>64&&m[i]<91)||(m[i]>96&&m[i]<123)
           ||(m[i]>47&&m[i]<58)))return 0;
      i++;
    }
    return 1;

}
