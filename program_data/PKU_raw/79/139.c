

int asdf(int n,int m)
{
        int *a = (int*)malloc(n*sizeof(int));
        int ret=0;
        int i=0;
        int left=n;
        int temp = 0;
        int inc=0;

        for(i=0;i<n;i++)
        {
                a[i]=i+1;
        }

        i=0;

        while(a[1]!=0)
        {
                temp = (i + m)%left;
                if(0==temp)
                {
                        temp = left;
                }
                else
                {
                        for(inc=temp;inc<left;inc++)
                        {
                                a[inc-1]=a[inc];

                        }
                }
                i = temp-1;
                a[left-1]=0;
                left--;
        }
        ret = a[0];

        free(a);
        return ret;
}

int main()
{
        int n,m;
        int res[MAX_SIZE];
        int counter =0;
        memset(res,0,sizeof(res));

        for(;counter<MAX_SIZE;counter++)
        {
                scanf("%d %d",&n,&m);
                if(n==0)
                {
                        break;
                }
                res[counter]=asdf(n,m);
        }
        for(counter =0;(counter<MAX_SIZE)&&(res[counter]!=0);counter++)
        {
                printf("%d\n",res[counter]);
        }
        return 0;
}
