//****************************************
//*???????                            **
//*????? 1100013004                     **
//*???2010.11.13                          **
//****************************************
int a,b,i,j,n,sum = 0,mi,k = 1;
char num[100],input[100];
void calc(){
for(i = n - 1; i >= 0 ;i--) 
	{
		if(num[i] <= '9')
			sum += (num[i] - '0') * k;
		else
		{
			if(num[i] <= 'Z')
                sum += ((num[i] - 'A') + 10) * k;
			else
				sum += ((num[i] - 'a') + 10) * k;
		}
	   k *= a;
	}
}
int main() 
{
  
    cin>>a;
	cin.get();
	cin.getline(num,100,' ');
    cin>>b;
	for(i = 0; num[i] != 0;i++);
    n = i;
    calc();
	i = 0;
	do
	{
		mi = sum % b;
		if (mi < 10)
			input[i] = mi + '0';
		else 
			input[i] = 'A' + mi - 10;
		sum = sum / b;
		i++;
	}while(sum > 0);
	for (j = i - 1;j >= 0;j--)
		cout<<input[j];
	return 0;
}


