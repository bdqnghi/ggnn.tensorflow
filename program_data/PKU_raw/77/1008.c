
char dui[150];
char nan;
char nv;
char dis;



int main()
{
    void deleted();
void peidui(int * left , int * right);
int iter,index,left,right;
   gets(dui);
    nan = dui[0];
    index = 1;
    while(dui[index] != '\0')
    {
        if(dui[index] != nan)
        {
            nv = dui[index];
            break;
        }
        index++;
    }
    deleted();
    index = strlen(dui)/2;
    for(iter = 0 ; iter != index ; ++iter)
    {
        peidui(&left,&right);
        printf("%d %d\n",left,right);
    }
    return 0;
}

void deleted()
{
    if('#' != nan && '#' != nv)
    {
        dis = '#';
    }
    else if('@' != nan && '@' != nv)
    {
        dis = '@';
    }
    else if('$' != nan && '$' != nv)
    {
        dis = '$';
    }
}

void peidui(int * left , int * right)
{
    int index = 0;
    int boysready = 0;
    while(dui[index] != '\0')
    {
        if(dui[index] == nan)
        {
            boysready = 1;
            *left = index;
        }
        else if(dui[index] == nv)
        {
            if(boysready)
            {
                *right = index;
                break;
            }
        }
        index++;
    }
    dui[*left] = dui[*right] = dis;
}