
struct a60
{
    char ID[10];
    int age;
}a60[101];

struct u60
{
    char ID[10];
    int age;
}u60[100];

void sort(int n)
{
    int i;
    struct a60 *x;
    for(i=1;i<n;i++)
    {
        for(x=a60; x<a60+n-i; x++)
        {
            if(x->age < (x+1)->age)
            {
                a60[100]=*x;
                *x=*(x+1);
                *(x+1)=a60[100];
            }
        }
    } 
}

int main()
{
    int a=0, b=0, m, n, q;
    char p[10];
    struct a60 *x;
    struct u60 *y;
    x=a60;
    y=u60;

    scanf("%d", &n);
    
    for(m=0; m<n; m++)
    {
        scanf("%s %d", p, &q);

        if(q>=60)
        {
            strcpy(x->ID,p);
            x->age=q;
            x++;
            a++;
        }else{
            strcpy(y->ID,p);
            y->age=q;
            y++;
            b++;
        }
    }

    sort(a);

    for(x=a60; x<a60+a; x++)
        printf("%s\n", x->ID); 

    for(y=u60; y<u60+b; y++)
        printf("%s\n", y->ID);

    return 0;
}