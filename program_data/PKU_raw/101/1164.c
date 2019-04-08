int main(){
	int a,b,c;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				if(((3-a)==(b>a)+(c==a))&&((3-b)==(a>b)+(a>c))&&((3-c)==(c>b)+(b>a)))
					{char f[4];
				f[a]='A';f[b]='B';f[c]='C';
				cout<<f[1]<<f[2]<<f[3];
					}

			}
		}
	}
	return 0;
}
