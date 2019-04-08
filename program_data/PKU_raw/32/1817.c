//***************************
//*????????          **
//*??????             **
//*???2013.11.15         **
//***************************
int main()
{ 
	int n;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
	const int MAX_LEN = 200;
    unsigned num1[MAX_LEN+1];
	unsigned num2[MAX_LEN];
    char str1[MAX_LEN + 1];
	char str2[MAX_LEN + 1];
	cin.get();
    cin.getline(str1, MAX_LEN + 1); 
    cin.getline(str2, MAX_LEN + 1);
    int nLen1 = strlen(str1);
    int nLen2 = strlen(str2);
    memset(num1, 0, sizeof(num1)); 
    memset(num2, 0, sizeof(num2));
    int i, j = 0;
    for (i = nLen1 - 1; i >= 0; i--)
	num1[j++] = str1[i] - '0';                 //???????????????
    j = 0;
    for (i = nLen2 - 1; i >= 0; i--)
    num2[j++] = str2[i] - '0';
    for (i = 0; i < MAX_LEN; i++)
    { 
       num1[i] -= num2[i];                     //???????????
       if(num1[i] >= 10)                       //????????
       {
          num1[i] += 10; 
		  num1[i + 1]--;                       //????
       }
     }
     i = MAX_LEN;
    while (num1[i]==0) 
		i--;                                   //???????0??
    for (; i >= 0; i--)
    cout << num1[i];                           //??????
    cout << endl;
	}
    return 0;
}