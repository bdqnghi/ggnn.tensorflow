int main()
{
    char str1[50],str2[50];
    int l1,l2;
    cin>>str1>>str2;
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1!=l2)
        cout<<"NO"<<endl;
    else
        {
            for(int i=0;i<l1;i++)
               for(int j=1;j<l1-i;j++)
               {
                   if(str1[j]<str1[j-1])
                   {
                       char temp;
                       temp=str1[j];
                       str1[j]=str1[j-1];
                       str1[j-1]=temp;
                   }
                   if(str2[j]<str2[j-1])
                   {
                       char temp;
                       temp=str2[j];
                       str2[j]=str2[j-1];
                       str2[j-1]=temp;
                   }
               }
            if(strcmp(str1,str2)==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    return 0;
}

