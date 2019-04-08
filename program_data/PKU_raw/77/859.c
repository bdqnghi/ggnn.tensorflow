char str[201];                  
int flag[101];                 
int i , k , length;
char a , b;                //?????? 
void f(char s[] , int l);  //???? 
int main()
{
	int j = 0;
	cin >> str;
	length = strlen(str);    //???????? 
	a = str[0];
	b = str[length - 1];            //????????a,b 
	for(i = 1; i <= length - 1; i++)
	{
		if(str[i] == b)       
		{
			j++; 
			flag[j] = i;	
		}	
	}
	k = j;                        //???????k 
	f(str , 1);                 
	return 0;
}	
void f(char s[] , int l)
{
	if(l <= k)
	{
		for(i = flag[l]; i >= 0; i--)    
		{
			if(s[i] == a)
			{
				cout << i << " " << flag[l] << endl;     //???????????????? 
				s[i] = '\0';
				s[flag[l]] = '\0';	              //?? 
				break;
			}	
		}	
		f(s , l + 1);  //?? 
	} 
	else
	return ;
}
