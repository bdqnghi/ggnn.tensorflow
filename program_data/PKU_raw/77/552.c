

char m, f, flag;

void paidui(char *p, int n)
{    
	int i;
	
	for (i = 1; p[n + i] != '\0'; i++)
	{
		if (p[n + i] == m)
			paidui(p, n + i);
		else
			if(p[n + i] == f)
			{
				p[n] = flag;
				p[n + i] = flag;
				cout << n << " " << (n + i) << endl;
				return;
			}
	}
}      


int main()
{  
	
	 char str[100];
	 cin >> str;

	 m = str[0];
	 
	 int i = 0;
	 while(str[i] == m)
		 i++;
	 f = str[i];
     for (i = 'A' ; i <= 'z'; i++)
		 if (i != m && i != f)
		 {
			 flag = i;
			 break;
		 }
	 paidui(str, 0);
	 return 0;
}
