int main()
{
    char input[31];
    int i;    


    for(i = 0; i < 31; i ++)
        input[i] = '\0';

    gets(input);

    for(i = 0; i < 30; i ++)
        if(input[i] >= '0' && input[i] <= '9')
        {
           
            printf("%c", input[i]);
			
        }
        else
        {
            printf("\n");
        }

        return 0;
}
