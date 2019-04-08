

void main()
{int i,j,len,max=0;
char str[13],substr[3],t[13]={'\0'},c;

scanf("%s",str);
len=strlen(str);
scanf("%s",substr);
c=getchar();
//scanf("%s\n",substr);


while(c=='\n')
{	
	/*for(i=len;i>0;i--)
	str[i]=str[i-1];
	str[0]=c;
	len++;*/
for(i=0;i<len;i++)
	if(str[i]>max) max=str[i];
for(i=0;str[i]!=max;i++);
	for(j=i+1;j<len;j++)
		t[j-i-1]=str[j];
	str[i+1]='\0';
	strcat(str,substr);
	strcat(str,t);
	puts(str);
for(i=0;i<len;i++)	
	t[i]='\0';//puts("t=");puts(t);
	max=0;

scanf("%s",str);
len=strlen(str);
scanf("%s",substr);
c=getchar();



}
}