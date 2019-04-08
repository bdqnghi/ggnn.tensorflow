//???? 
int main()
{
    int n=0;   //??????
    int i=0;  //???? 
    int j=0;
    int pan=0;  //???????? 
    char str[90];  //????? 
    for(i=0;i<90;i++)
    {
        str[i]=0;
    }
    
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        cin.getline(str,90);
        
            if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
            {
                for(j=0;str[j]!=0;j++)
                {
                    if((str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')))
                    {
                        pan=0;
                    }
                    else
                    {
                        pan=1;
                        break;
                    }
                }
                if(pan==1)
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
            }
            else
            {
                cout<<0<<endl;
            }
    } 
    return 0;
}