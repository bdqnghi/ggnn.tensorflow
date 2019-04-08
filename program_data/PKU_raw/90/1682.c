
int divide(int apple,int plate);

int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        int plate,apple;
        scanf("%d %d",&apple,&plate);
        printf("%d\n",divide(apple,plate));
    }    
}    

int divide(int apple, int plate)
{
    if (plate==1)
    {
        return 1;
    }    
    else if (apple<0) 
    {
        return 0;
    }    
    else 
    {
        return divide(apple,plate-1)+divide(apple-plate,plate);
    }    
}    