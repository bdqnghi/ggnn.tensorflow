int main ()
{
	char a[100];
	char *p;
	int i, j, k;
	cin.getline(a,100);
	p = a;
	for( i = 0;*(p+i) != '\0';i++)
	{
		if(*(p+i)==' ')
		{
			for(j = i+1; ;j++)
			{
				if(*(p+j)==' ')
				{
					j--;
					for(k=j;*(p+k)!='\0';k++)
						*(p+k) = *(p+k+1);
				}
				else break;
			}
			i = j;
		}
	}
		cout << p <<endl;
		return 0;
}