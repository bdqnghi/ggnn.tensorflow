int main()
{
    int deno[6] = {100,50,20,10,5,1};
    int money;
    scanf("%d",&money);
    int count[6];
    for (int i=0;i<6;++i) count[i] = 0;
    while (money!=0)
    {
        for (int i=0;i<6;++i)
        {
            if (money>=deno[i])
            {
                money -= deno[i];
                count[i]++;
                break;                   
            }    
        }              
    }
    for (int i=0;i<6;++i)
    {
        printf("%d\n",count[i]);    
    }        
    return 0;
}