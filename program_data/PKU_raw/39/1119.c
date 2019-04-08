

int main(int argc, char* argv[])
{
	
    char name[100][100];
	char s[2], w[2];
    int a, b, c;
	int n, sum[100], sum1=0, i, f=-1, g=0, j;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
	  scanf("%s%d%d%s%s%d", name[i], &a, &b, s, w, &c);
	  

         sum[i] = 0;
		if(a>80 && c!=0)
		{
			sum[i] += 8000;
			sum1 += 8000;
		}
		if(a>85 && b>80)
		{
			sum[i] += 4000;
			sum1 += 4000;
		}
		if(a>90)
		{
			sum[i] += 2000;
			sum1 += 2000;
		}
		if(a>85 && w[0]=='Y')
		{
			sum[i] += 1000;
			sum1 += 1000;
		}
		if(b>80 && s[0]=='Y')
		{
			sum[i] += 850;
			sum1 += 850;
		}
		
	}
	for(j=0;j<n;j++)
	{
		if(sum[j]>f)
		{
			f=sum[j];
			g=j;
		}
		
	}
	printf("%s\n", name[g]);
	printf("%d\n", f); 
    printf("%d\n", sum1);
    return 0;
}