

void main()
{
char *s,*w;
int i,j,flag=1,lena,lenb,head;

s=(char *)calloc(50,sizeof(char));
w=(char *)calloc(50,sizeof(char));
  scanf("%s",s);
    scanf("%s",w);
	lena=strlen(s);
	lenb=strlen(w);
for(i=0;i<lenb-1;i++)
{
	for(j=0;j<lena-1;j++)
		if(*(s+j)!=*(w+i+j)) flag=0;
		
		if(flag==1) {head=i;break;}
		flag=1;
}
printf("%d",head);
}
