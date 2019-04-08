
int main()
{
    int data[20] = {1,1};
    int n;
    int a;
    int i, j;
    
    for(j = 2; j <= 19; j++)
                data[j] = data[j - 2] + data[j - 1];
    
    scanf("%d", &n);
    
    for(i = 0; i <= n - 1; i++)
    {
          scanf("%d", &a);
          printf("%d\n", data[a - 1]);
    }
    
    return 0;
}
          
          
          
          
