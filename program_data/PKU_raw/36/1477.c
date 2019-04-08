//?????? ???

char A[200],B[200];
int a[256],b[256],i;

int main()
{
    scanf("%s%s",A,B);
    i=0;

    //????????????????
    while(A[i]!='\0')
    {
        a[A[i]]++;
        i++;
    }
    i=0;
    while(B[i]!='\0')
    {
        b[B[i]]++;
        i++;
    }

    //??????
    for(i=0;i<256;i++)
        if(a[i]!=b[i])
        {
            printf("NO");
            return 0;
        }

    printf("YES");
}
