int main()
{
        char a,b;
        int i=1;

        b=60;
        for(;i>0;i++)
        {
                a=cin.get();
                if(a=='\n') break;
                if(a!=' '||b!=' ') cout<<a;
                b=a;
        }
        return 0;
}
