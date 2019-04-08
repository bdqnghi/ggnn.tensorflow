int main()
{
        int count[1001];

        memset(count,0,sizeof(count));

        int come[1000],go[1000];
        char m;

        int i,j,max;

        for(i=0;;i++)
        {
                cin>>come[i];
                m=cin.get();
                if(m=='\n')
                        break;
        }

        for(i=0;;i++)
        {
                cin>>go[i];
                m=cin.get();
                if(m!=',')
                        break;
        }

        int num=i+1;


        for(i=0;i<num;i++)
                for(j=come[i];j<go[i];j++)
                        count[j]++;
        max=0;
        for(i=0;i<=1000;i++)
                if(count[i]>max)
                        max=count[i];

        cout<<num<<" "<<max<<endl;

        return 0;
}