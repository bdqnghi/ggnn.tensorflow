int main()
{
    char A[100],B[100],T[100],C[100][100];           //??????A?????`B???????`T???????,C??A???? 
    int i,j=0,a=0,l;                                 //??????i`j,????a`l 
    cin.getline(A,100,'\n');                         //????????????? 
    cin.getline(B,100,'\n');
    cin.getline(T,100,'\n');
    l=strlen(A);
    for (i=0;i<l;i++)
    {
        if (A[i]!=' ')
        {
           C[j][a]=A[i];
           a=a+1;
        }
        else 
        {
           a=0;
           j=j+1;
        }
    }
    for (i=0;i<=j;i++)                               
    {
        l=strcmp(C[i],B);
        if (l==0)                                   //?????????A????
           strcpy(C[i],T);                          //?? 
    }
    for (i=0;i<j;i++)                               //?????
        cout<<C[i]<<" ";
    cout<<C[j];
    return 0;
} 
