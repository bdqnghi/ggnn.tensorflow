int main(int argc, char* argv[])
{
	int N;
	int a[26]={0};

	struct book{
		int x;
		char y[27];
	}A[1000];

	scanf("%d",&N);
	int i,j;
	for(i=0;i<N;i++)
	{
		scanf("%d%s",&A[i].x,A[i].y);
		for(j=0;A[i].y[j]!='\0';j++)
		{
			if(A[i].y[j]=='A')
			{
				a[0]++;
			}
			
			else if(A[i].y[j]=='B')
			{
				a[1]++;
			}
			else if(A[i].y[j]=='C')
			{
				a[2]++;
			}
			else if(A[i].y[j]=='D')
			{
				a[3]++;
			}
			else if(A[i].y[j]=='E')
			{
				a[4]++;
			}
			else if(A[i].y[j]=='F')
			{
				a[5]++;
			}
			else if(A[i].y[j]=='G')
			{
				a[6]++;
			}
			else if(A[i].y[j]=='H')
			{
				a[7]++;
			}
			else if(A[i].y[j]=='I')
			{
				a[8]++;
			}else if(A[i].y[j]=='J')
			{
				a[9]++;
			}
			else if(A[i].y[j]=='K')
			{
				a[10]++;
			}
			else if(A[i].y[j]=='L')
			{
				a[11]++;
			}
			else if(A[i].y[j]=='M')
			{
				a[12]++;
			}
			else if(A[i].y[j]=='N')
			{
				a[13]++;
			}
			else if(A[i].y[j]=='O')
			{
				a[14]++;
			}
			else if(A[i].y[j]=='P')
			{
				a[15]++;
			}
			else if(A[i].y[j]=='Q')
			{
				a[16]++;
			}
			else if(A[i].y[j]=='R')
			{
				a[17]++;
			}
			else if(A[i].y[j]=='S')
			{
				a[18]++;
			}
			else if(A[i].y[j]=='T')
			{
				a[19]++;
			}
			else if(A[i].y[j]=='U')
			{
				a[20]++;
			}
			else if(A[i].y[j]=='V')
			{
				a[21]++;
			}
			else if(A[i].y[j]=='W')
			{
				a[22]++;
			}
			else if(A[i].y[j]=='X')
			{
				a[23]++;
			}
			else if(A[i].y[j]=='Y')
			{
				a[24]++;
			}
			else if(A[i].y[j]=='Z')
			{
				a[25]++;
			}
		}
	}

	int p;
	int max;
    p=0;
	max=a[0];
	for (i=0;i<26;i++)
	{
		if (a[i]>max)
		{
			p=i;
			max=a[i];
		}
	}
	char d;
	d=('A'+p);
	printf ("%c\n%d\n",d,max);
	for (i=0;i<N;i++)
	{
		for (j=0;A[i].y[j]!='\0';j++)
		{
			if (A[i].y[j]==(p+'A'))
				printf("%d\n",A[i].x);
		}
	}

		
	


	return 0;
}

