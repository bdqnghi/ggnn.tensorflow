int cmp(const void *a,const void *b)
{
	return(*(char*)a-*(char*)b);
}
void main()
{
	char s1[1000],s2[1000];
	scanf("%s%s",s1,s2);
	int n1=strlen(s1),n2=strlen(s2);
	int flag=1;
	if(n1!=n2) {printf("NO");flag=0;}
	qsort(s1,n1,sizeof(s1[0]),cmp);
	qsort(s2,n2,sizeof(s2[0]),cmp);
	if(flag){
	if(strcmp(s1,s2)==0)
		printf("YES");
	else printf("NO");
	}
}
