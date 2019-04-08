

int main(int argc, char* argv[])
{   
	struct stu
	{  char name[20];
       int fen;
	   int ban;
	   char gan[1];
	   char xi[1];
       int wen;
	}s[100];
	int n,i,j,money=0,mon=0,mona=0;
	scanf("%d",&n);
    for (i=0;i<n;i++){
		scanf("%s",s[i].name);
        scanf("%d",&s[i].fen);
		scanf("%d",&s[i].ban);
		scanf("%s",s[i].gan);
		scanf("%s",s[i].xi);
		scanf("%d",&s[i].wen);
		if (s[i].fen>80&&s[i].wen>=1)
			money=money+8000;
		if (s[i].fen>85&&s[i].ban>80)
			money=money+4000;
		if (s[i].fen>90)
			money=money+2000;
		if (s[i].fen>85&&s[i].xi[0]=='Y')
			money=money+1000;
		if (s[i].ban>80&&s[i].gan[0]=='Y')
			money=money+850;
        if (money>mon){
			mon=money;
			j=i;
		}
		mona=mona+money;
		money=0;
	}
		printf("%s\n",s[j].name);
        printf("%d\n",mon);
        printf("%d\n",mona);
	return 0;
}
