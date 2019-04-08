struct book{
	int num1;
	char au[27];
}bk[1000];
struct author{
	char name;
	int a;
	int num2[1000];
}aur[27];
int main()
{
	int n,i,j;
	struct author max;
	max.a=0;
	
	for(j=0;j<26;j++){
		aur[j].name=65+j;
		aur[j].a=0;
		}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&bk[i].num1,bk[i].au);
	}
	//??????,?????
	for(i=0;i<n;i++){
		for(j=0;bk[i].au[j]!='\0';j++){
			aur[bk[i].au[j]-65].num2[aur[bk[i].au[j]-65].a]=bk[i].num1;
			aur[bk[i].au[j]-65].a++;
		}
	}
	//??????????
	for(i=0;i<26;i++){
		if(aur[i].a>max.a)max=aur[i];
	}
	printf("%c\n%d\n",max.name,max.a);
	for(i=0;i<max.a;i++){
		printf("%d\n",max.num2[i]);
	}
	return 0;
}
