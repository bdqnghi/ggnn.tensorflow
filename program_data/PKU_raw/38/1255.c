int main()
{        double num[100][100];
        int m,n,i,j;
        double sum,average,sums,u,t,s,averages;
        scanf("%d",&m);
        for(i=0;i<m;i++){
                scanf("%d",&n);
                sums=sum=0;
                for(j=0;j<n;j++){
                        scanf("%lf",&num[i][j]);
                        sum+=num[i][j];
                }
                average=sum/n;
                for(j=0;j<n;j++){
                        u=num[i][j]-average;
                        t=u*u;
                        sums+=t;
                }
                averages=sums/n;
                s=sqrt(averages);
                printf("%.5f\n",s);


        }
        return 0;
}

