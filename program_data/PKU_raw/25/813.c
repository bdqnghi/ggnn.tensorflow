



int main()

{

    int N;


    int value[1001] = {0}; 

    int i;

    value[1000] = 1;

    

    scanf("%d", &N); //2^N




    while(N--)

    {

     

        for(i = 1000; i > 0; i--)

        {

            value[i] *= 2;

        }



        for(i = 1000; i > 0; i--)

        {

            if(value[i] >= 10)

            {

                value[i] -= 10;

                value[i-1] += 1;

            }

        }

    }





    for(i = 0; i <= 1000; i++)

    {

        if(value[i] != 0)

        {

            while (i <= 1000)

            {

                printf("%d", value[i]);

                ++i;

            }



            break;

        }

    }




    return 0;

}

