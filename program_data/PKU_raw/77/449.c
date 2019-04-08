char Dat[maxn];
int n,Stac[maxn],Top;
int main() {
scanf("%s",&Dat);
n = strlen(Dat);
Top = 0;
for (int i = 0; i < n; i++)
    if (Dat[i] == Dat[0])
	Stac[++Top] = i;
    else
	printf("%d %d\n",Stac[Top--],i);
}