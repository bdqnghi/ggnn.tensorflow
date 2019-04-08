/*
 *???: model programming.cpp
 *??????
 *????: 2012-11-18
 *??: ?????
 */


int num1[1000],num2[1000],a,b;

void cin_array(int num1[],int num2[])
{
    cin >> a >> b;
    for (int i = 0; i < a; i++) cin >> num1[i];
    for (int i = 0; i < b; i++) cin >> num2[i];
}//??a?b?????

void sort(int num1[],int num2[])
{
    int temp;
    for (int i = 1; i <= a; i++)
        for (int j = 0; j < a - i; j++)
            if (num1[j] > num1[j+1]){
                temp = num1[j];
                num1[j] = num1[j+1];
                num1[j+1] = temp;
            }
    for (int i = 1; i <= b; i++)
        for (int j = 0; j < b - i; j++)
            if (num2[j] > num2[j+1]){
                temp = num2[j];
                num2[j] = num2[j+1];
                num2[j+1] = temp;
            }
}//???????????

void connect(int num1[], int num2[])
{
    for (int i = 0; i < b; i++)
        num1[a + i] = num2[i];
}//??

void cout_array(int num[])
{
    for (int i = 0; i < a + b - 1; i++)
        cout << num[i] << " ";
    cout << num[a+b-1];
}//??

int main ()
{
    cin_array(num1,num2);
    sort(num1,num2);
    connect(num1,num2);
    cout_array(num1);
    return 0;
}
