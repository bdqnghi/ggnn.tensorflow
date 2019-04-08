int main()
{
    char word[1000] ;
    cin>> word ;
    int length = strlen(word );
    for (int i = 0 ; i< length ; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z' )
            word[i]+=('A' - 'a') ; // ???????
    }
    char temp = word [0] ;
    int counts = 1 ;
    for (int i = 1 ; i< length ; i++)
    {
        if (word[i] != temp )
        {
            printf("(%c,%d)" ,temp ,counts );
            temp = word[i] ;
            counts = 1 ;
        }
        else
        {
            counts++;
        }
    }
    printf("(%c,%d)" ,temp ,counts );
    return 0;
}
