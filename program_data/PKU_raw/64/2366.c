

int t[2000];

double id(int a,int b,int c)
{
    return sqrt(a*a+b*b+c*c);

}
int main()
{
 int i,j,n,m,s=0,x[20],y[20],z[20],q[200],w[200];
 double d[200];
 scanf("%d",&m);
 for(i=0;i<m;i++)

       { scanf("%d%d%d",&x[i],&y[i],&z[i]);

       }
        n=m*(m-1)/2;
for(i=0;i<m-1;i++)

for(j=i+1;j<m;j++)
{
d[s]=id(x[i]-x[j],y[i]-y[j],z[i]-z[j]);
q[s]=i;
w[s]=j;
s++;
}




         //for(i=0;i<=n+1;i++)
        //{for(j=0;j<=n+1;j++)printf("%d ",a[i][j]);printf("\n");}
        for(i=1;i<=n;i++)
        for(j=0;j<n-i;j++)
        if(d[j]<d[j+1])
        {
            swap(q[j],q[j+1]);
            swap(w[j],w[j+1]);
            swap(d[j],d[j+1]);

        }



        for(j=0;j<n;j++)
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[q[j]],y[q[j]],z[q[j]],x[w[j]],y[w[j]],z[w[j]],d[j]);
        return 0;


}