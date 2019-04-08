/*
 *????task.cpp
 *??????
 *?????2012-11-22
 *??????????
 */



int n1,n2,num1[10001],num2[10001];

void init() // ????????
{
    int i;
    cin >> n1 >> n2;
    for (i=0;i<n1;i++) cin >> num1[i];
    for (i=0;i<n2;i++) cin >> num2[i];
}

void sort() // ??
{
    int i,j,t;
    for (i=0;i<n1-1;i++) // ?num1????
        for (j=0;j<n1-i-1;j++)
            if (num1[j]>num1[j+1])
            {
                t=num1[j];num1[j]=num1[j+1];num1[j+1]=t; // ??
            }
    for (i=0;i<n2-1;i++) // ?num2????
        for (j=0;j<n2-i-1;j++)
            if (num2[j]>num2[j+1])
            {
                t=num2[j];num2[j]=num2[j+1];num2[j+1]=t; // ??
            }
}

void merge() // ??
{
    int i,j;
    for (i=n1,j=0;j<n2;i++,j++) num1[i]=num2[j]; // ?num2??num1??
    n1+=n2;
}

void show() // ????????
{
    int i;
    cout << num1[0];
    for (i=1;i<n1;i++) cout << ' ' << num1[i];
    cout << endl;
}

int main()
{
    init(); // ????????
    sort(); // ??????????
    merge(); // ?????????
    show(); // ????????
    return 0;
}