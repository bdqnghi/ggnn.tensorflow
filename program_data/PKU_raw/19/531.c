char sen[100];
char words[50][50];
char a[50];
char b[50];


void main()
{
int wordi=0;
int i;
char *ptr,*wr;
char out[100];
gets(sen);
scanf("%s %s",a,b);
ptr=sen;
wr=words;
do
{
	if(*ptr==' ')
	{
		*wr='\0';
		wordi++;
		ptr++;
		wr=words+wordi;
	}
	else
	{
		*wr=*ptr;
		wr++;
		ptr++;
	}
}while(*ptr!='\0');
*wr='\0';
out[0]='\0';
for(i=0;i<=wordi;i++)
{
	if(strcmp(a,words+i)==0)strcat(out,b);
	else strcat(out,words+i);
	strcat(out," ");
}
out[strlen(out)-1]='\0';
puts(out);
}