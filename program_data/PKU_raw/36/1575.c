int main()
{
	char a[1000]="",b[1000]="";
	scanf("%s",a);
	scanf("%s",b);
	int counta,countb;
	int i,j;
	for(i=0;i<=127;i++)
	{ counta=0;countb=0;
		for(j=0;a[j]!='\0';j++)
			if(a[j]==i) counta++;
		for(j=0;b[j]!='\0';j++)
			if(b[j]==i)countb++;
		if(counta!=countb)break;
	}
	if(i==128)printf("YES");
	else printf("NO");
	return 0;
}