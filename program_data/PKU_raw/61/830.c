//?? - ??????   
 

int main()
{
    int f(int);
    int n;
    int a;
    int i,j;
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a);
                    printf("%d\n\n",f(a));
                    
    }
    return 0;
}
int f(int a)
{
    if(a==1)return 1;
    if(a==2)return 1;
    else return f(a-1)+f(a-2);
}
