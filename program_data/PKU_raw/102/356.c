
main()
{
    int n,i,j;
    scanf("%d",&n);
    float girl[40]={0},boy[40]={0};
    int g=0,b=0;//??????
    char tender[8];//??
    for(i=0;i<n;i++)
    {

        scanf("%s",tender);

        if(tender[0]=='m')//???????????????
        {
            scanf("%f",&boy[b]);
            b++;
        }

        else//??????????
        {
            scanf("%f",&girl[g]);
            g++;
        }
    }
    for(i=g-1;i>0;i--)//??????????????
    {
        for(j=0;j<i;j++){

             if(girl[j]<girl[j+1])
            {
            float temp;
            temp=girl[j];
            girl[j]=girl[j+1];
            girl[j+1]=temp;

            }
        }
    }
    for(i=b-1;i>0;i--)//??????????????
    {
        for(j=0;j<i;j++){

             if(boy[j]>boy[j+1])
            {
            float temp;
            temp=boy[j];
            boy[j]=boy[j+1];
            boy[j+1]=temp;

            }
        }
    }


    for(i=0;i<b;i++)//?????????
    {
        printf("%.2f ",boy[i]);
    }

    for(i=0;i<g;i++)//?????????
    {
        printf("%.2f",girl[i]);
        if(i<g-1) printf(" ");
    }

}
