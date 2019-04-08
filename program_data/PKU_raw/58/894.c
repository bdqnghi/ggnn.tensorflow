int main()
{
    int num,i,sign;
    char vacab[100][100];
    cin>>num;
    int sum(char x[100]);
	cin.get();
    for(i=0;i<num;i++)
    {
       cin.getline(vacab[i],100);
       sign=sum(vacab[i]);
       if(sign==1)
       cout<<1<<endl;
       else
       cout<<0<<endl;
    }
    return 0;
}
int sum(char x[100])
{
        int j=0;int temp;
        j=0;
        if(x[0]=='_'||x[0]>='A'&&x[0]<='Z'||x[0]>='a'&&x[0]<='z')
        {
            while(x[j]!='\0')
            {
                if(x[j]=='_'||x[j]>='A'&&x[j]<='Z'||x[j]>='a'&&x[j]<='z'||x[j]>='0'&&x[j]<='9')
                {
                    temp=1;
                    j++;
                }
                else
                {
                    temp=0;
                    break;
                }
			}
        }
        else
        {
            temp=0;
        }
        return (temp);
}