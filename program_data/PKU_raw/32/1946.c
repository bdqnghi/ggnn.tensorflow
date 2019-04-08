char m[20][100],n[20][100],a[20][100];
int lm[20],ln[20];
void minus(int k,int x,int r)
{
	int s;
	if (x>=101-lm[k]) 
	{ s=m[k][x]-n[k][x]+r;		  
	      if (s>=0) r=0;
	      else
		  {
			 r=-1;
			 s=s+10;
		  }
		  minus(k,x-1,r);
		  a[k][x-101+lm[k]]=s+48;
		}
}

void input(int k)
{
	int i,j;
	scanf("%s",m[k]);
	scanf("%s",n[k]);
	lm[k]=strlen(m[k]);
	ln[k]=strlen(n[k]);
	j=100;
	for (i=lm[k]-1;i>=0;i--)
	{
		m[k][j]=m[k][i]-48;
		m[k][i]=0;
		j--;
	}
	j=100;
	for (i=ln[k]-1;i>=0;i--)
	{
		n[k][j]=n[k][i]-48;
		n[k][i]=0;
		j--;
	}
}

void main()
{
	int i,s;
	scanf("%d",&s);
	for (i=1;i<=s;i++)
	{
		input(i);
		if(i<s)getchar();
		minus(i,100,0);
	}
	for (i=1;i<=s;i++)
		printf("%s\n",a[i]);
}