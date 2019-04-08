int main(int argc, char* argv[])
{
	char s[100],t[100][100];int n,i,j,l[100];
	scanf("%d",&n);
	for(i=0;i<n+1;i++){gets(s);l[i]=strlen(s);
	if(s[l[i]-1]=='r'){for(j=0;j<l[i]-2;j++)t[i][j]=s[j];l[i]=l[i]-2;}
	else if(s[l[i]-1]=='y'){for(j=0;j<l[i]-2;j++)t[i][j]=s[j];l[i]=l[i]-2;}
	else if(s[l[i]-1]=='g'){for(j=0;j<l[i]-3;j++)t[i][j]=s[j];l[i]=l[i]-3;}}
	for(i=0;i<n+1;i++){for(j=0;j<l[i];j++)
	{printf("%c",t[i][j]); }if(i!=0)printf("\n");}
	return 0;
}
