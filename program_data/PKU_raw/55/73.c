
int f(char a);
void k(int s,int n,int g[]);
int main()
{
	double m,n;
	char a[30];
	cin>>m;
	cin>>a;
	cin>>n;
	int i,l=strlen(a),s=0;
	for(i=0;i<=l-1;i++)
	{
		s=s+f(a[i])*(int)pow(m,l-i-1);
	}
	int b[50];
	k(s,n,b);
	
    
	return 0;

}

int f(char a)
{
	if(a=='0')return 0;
	if(a=='1')return 1;
	if(a=='2')return 2;
	if(a=='3')return 3;
	if(a=='4')return 4;
	if(a=='5')return 5;
	if(a=='6')return 6;
	if(a=='7')return 7;
	if(a=='8')return 8;
	if(a=='9')return 9;
	if(a=='a'||a=='A')return 10;

if(a=='b'||a=='B')return 12-1;
if(a=='c'||a=='C')return 13-1;
if(a=='d'||a=='D')return 14-1;
if(a=='e'||a=='E')return 15-1;
if(a=='f'||a=='F')return 16-1;
if(a=='g'||a=='G')return 17-1;
if(a=='h'||a=='H')return 18-1;
if(a=='i'||a=='I')return 19-1;
if(a=='j'||a=='J')return 20-1;
if(a=='k'||a=='K')return 21-1;
if(a=='l'||a=='L')return 22-1;
if(a=='m'||a=='M')return 23-1;
if(a=='n'||a=='N')return 24-1;
if(a=='o'||a=='O')return 25-1;
if(a=='p'||a=='P')return 26-1;
if(a=='q'||a=='Q')return 27-1;
if(a=='r'||a=='R')return 28-1;
if(a=='s'||a=='S')return 29-1;
if(a=='t'||a=='T')return 30-1;
if(a=='u'||a=='U')return 31-1;
if(a=='v'||a=='V')return 32-1;
if(a=='w'||a=='W')return 33-1;
if(a=='x'||a=='X')return 34-1;
if(a=='y'||a=='Y')return 35-1;
if(a=='z'||a=='Z')return 36-1;
}

void k(int s,int n,	int g[])
{

	int i=0;
	do
	{
		g[i]=s%n;
		s=(s-g[i])/n;
		i++;
	}while(s!=0);
	int j;

	for(j=i-1;j>=0;j--)
	{
		if(g[j]>=10)
			cout<<(char)('A'+g[j]-10);
	   else
		   cout<<g[j];
	}
}

	


