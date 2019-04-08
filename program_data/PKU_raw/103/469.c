char str[1001],letter[27],temp;
int i,start[27],l,s=1,op='A'-'a',
    opl='a'-'A';
int main()
{

    cin>>str;
    l=strlen(str);
    letter[1]=str[0];
    temp=letter[1];
    start[1]=0;
    for(i=0;i<l;i++)
    {
        if(str[i]==temp||str[i]==temp+op||str[i]==temp+opl)
        continue;
        else
        {
            s++;
            letter[s]=str[i];
            start[s]=i;
            temp=letter[s];
            }
        }
    for(i=1;i<=s;i++)
    {

        if(letter[i]>='a'&&letter[i]<='z')
           letter[i]=letter[i]+op;
        if(i<s)
        {
            cout<<"(";
        cout<<letter[i];
        cout<<",";
        cout<<start[i+1]-start[i];
        cout<<")";
        }
        if(i==s)
        {
            cout<<"(";
        cout<<letter[i];
        cout<<",";
        cout<<l-start[i];
        cout<<")";
        }
        }


    return 0;
}
