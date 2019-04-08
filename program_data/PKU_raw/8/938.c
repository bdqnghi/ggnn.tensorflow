void read(int s[],int n);
void arrange(int s[],int n);
void connect(int array1[],int array2[],int p1,int p2);
void print(int array[],int num);
int main()
{
	int s1[100],s2[100];
	int n1,n2;
	scanf("%d%d", &n1, &n2);
	read(s1,n1);
	read(s2,n2);
	arrange(s1,n1);
	arrange(s2,n2);
	connect(s1,s2,n1,n2);
	print(s1,n1+n2);
	return 0;
}
void read(int s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", &s[i]);
	}
}
void arrange(int s[],int n)
{
	int i,j;
	int t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j]>s[j+1]){
				t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
	}
}
void connect(int array1[],int array2[],int p1,int p2)
{
	int i;

	for(i=p1;i<p1+p2;i++){
		array1[i]=array2[i-p1];
	}
}

void print(int array[],int num)
{
	int i;
	printf("%d", array[0]);
	for(i=1;i<num;i++)
	{
		printf(" %d", array[i]);
	}
}