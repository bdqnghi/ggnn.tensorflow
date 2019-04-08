
int main(int argc, char* argv[])
{
	char s[52],w[52];
	int sc,wc,i,j,n=0;
	scanf("%s",s);
	scanf("%s",w);
	sc=strlen(s);
	wc=strlen(w);
	for(i=0;i<wc;i++)
	{
		if(s[0]==w[i])
		{
			n=1;
			for(j=1;j<sc;j++)
			{
				if(s[j]==w[i+j])
				{
					n++;
				}
			}
		}
		if(n==sc)
		{
			printf("%d\n",i);
			break;
		}
	}
	
	return 0;
}