void main()
{
	int n,i,j=0,s=0,m=0;
	char *p,c,d;
	p=(char*)malloc(80*sizeof(char));
	scanf("%d",&n);
         gets(p);
	for(i=0;i<n;i++)
	{p=(char*)malloc(80*sizeof(char));s=0;m=0;gets(p);
for(j=0;j<80;j++)if((d=*(p+j))!='\0')m++;
for(j=0;j<m;j++)if((d=*(p+j))>='0'&&(d=*(p+j))<='9'||(d=*(p+j))>='A'&&(d=*(p+j))<='Z'||(d=*(p+j))>='a'&&(d=*(p+j))<='z'||(d=*(p+j))=='_')s=s;else s=1;
if(s!=1&&(c=*p)>='A'&&(c=*p)<='Z'||s!=1&&(c=*p)>='a'&&(c=*p)<='z'||s!=1&&(c=*p)=='_')printf("1\n");
	else printf("0\n");}




}
