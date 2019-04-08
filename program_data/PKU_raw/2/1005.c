
struct book{
	int num;
	char author[27];
};
int main()
{
 int n,m,i,j;
 int author_num[26]={0};
 scanf("%d",&n);
 struct book shu[999];
 for(i=0;i<n;i++){
  scanf("%d%s",&shu[i].num,shu[i].author);
 }
 for(i=0;i<n;i++){
	 for(j=0;j<26;j++){
		 m=shu[i].author[j]-'A';
		 author_num[m]++;
	 }
 }
 int max=author_num[0],author='A';
 for(i=1;i<26;i++){
	 if(author_num[i]>max){
		 max=author_num[i];
		 author=i+'A';
	 }
 }
printf("%c\n%d\n",author,max);
for(i=0;i<n;i++){
	 for(j=0;j<26;j++){
		 if(shu[i].author[j]==author){
			 printf("%d\n",shu[i].num);
		 }
	 }
}
return 0;
}

