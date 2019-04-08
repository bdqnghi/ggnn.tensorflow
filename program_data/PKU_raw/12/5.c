
int main(int argc, char* argv[])
{
	int s[16];
	int i=1,a,j,b;



loop:;
		scanf("%d",&s[i]);
		if(s[i]!=0) 
		{
			i++;
			goto loop;
		}
		a=i;
		b=0;
		for(i=a;i>=1;i--)
		{
			for(j=1;j<i;j++)
			{
				if(s[i]==2*s[j]||s[j]==2*s[i])
					b++;
			}
		
		}

	printf("%d",b);

	return 0;
}
