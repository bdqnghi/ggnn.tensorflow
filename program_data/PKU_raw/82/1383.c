    struct patient
    {int x;
    int y;
           }p[100];
int main()
{
    int max=0;
    int n;
    cin>>n;
    int k=0;
    int i;
    for(i=1;i<=n;i++)
    scanf("%d %d",&p[i].x,&p[i].y); 
    for(i=1;i<=n;i++)
   { 
    if(p[i].x>=90&&p[i].x<=140&&p[i].y<=90&&p[i].y>=60)
    k++;
    else k=0;
    
    if(max<=k)
    max=k; 
    } 
cout<<max;


return 0;

}

