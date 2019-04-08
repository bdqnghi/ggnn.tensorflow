int main()
{
    int n,a,b[20];
    int i,j;
    scanf("%d",&n); 
    for(i=0;i<n;i++)
    {
          scanf("%d",&a);
          b[0]=1;b[1]=1;
          if(a==1||a==2) printf("1\n");
          else
          {for(j=2;j<a;j++)
          b[j]=b[j-2]+b[j-1];
          printf("%d\n",b[a-1]);}
    }
    getchar();
    getchar();
}