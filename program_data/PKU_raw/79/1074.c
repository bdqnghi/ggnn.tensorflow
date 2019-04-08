    int f(int m,int n)
    {
        int i;
        int k=0;

        { for(i=2;i<=m;i++)
        k=((n%i)+k)%i;}
        return k;
        }
        int main()
        {
            int m[100],n[100];
            int j,h;
            for(j=1;j<=100;j++)
            {scanf("%d %d",&m[j],&n[j]);
            if(m[j]==0&&n[j]==0)
            break;}
             for(h=1;h<j;h++)
            printf("%d\n",f(m[h],n[h])+1);
            getchar();
            getchar();
            return 0;
            }            