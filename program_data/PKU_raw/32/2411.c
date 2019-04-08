int main()
{
    char num1[100], num2[100], num3[100];
    int i, j, n, len1, len2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num1;
        cin>>num2;
        len1 = strlen(num1);
        len2 = strlen(num2);
        num3[len1]='\0';
        for(j=(len1-1);j>=len1-len2;j--)
        {
            if(num1[j]>=num2[j-len1+len2])
            {                            
                num3[j]=num1[j]-num2[j-len1+len2]+48;
            }
            else
            {
                num3[j]=58-(num2[j-len1+len2]-num1[j]);
                num1[j-1]=num1[j-1]-1;
            }
        }
        for(j=(len1-len2-1);j>=0;j--)
        {
            num3[j]=num1[j];
        }
        cout<<num3<<endl;
    }
    return 0;
}