int t[2000];
double s[1000],si;

int main()
{
 int i,j,n,m,s=0;
 scanf("%d%d",&m,&n);
 for(i=0;i<m;i++)

        scanf("%d",&t[i]);

         //for(i=0;i<=n+1;i++)
        //{for(j=0;j<=n+1;j++)printf("%d ",a[i][j]);printf("\n");}
        for(i=0;i<m-1;i++)
        for(j=i;j<m;j++)

        if(t[i]+t[j]==n)
        s=1;


        s?printf("yes"):printf("no");
        return 0;
}

