int num(char x[])
{
	int i,len,num=0;
	len=strlen(x);
	for(i=len-1;i>=0;i--)
	{
		if(x[i]!=' ')
			num++;
		else 
			break;
	}
	return(num);
}
void read(char x[],char y[])
{
	int i,j,lenx,leny;
	lenx=strlen(x);
	leny=num(x);
	for(i=lenx-1,j=0;i>=lenx-leny;i--,j++)
		y[leny-1-j]=x[i];
	y[leny]=' ';
	y[leny+1]='\0';
	x[lenx-leny-1]='\0';
}
int count(char x[])
{
	int len,i,p=0,m=0;
	len=strlen(x);
	for(i=0;i<len-1;i++)
	{
		if(x[i]==' ')
			p=0;
		else if(p==0)
			{
				p=1;
				m++;
			}
	}
	return(m);
}
main()
{
	char src[101],obj[101],trn[30];
	int i,num,len;
	gets(src);
	len=strlen(src);
	num=count(src);
	obj[0]='\0';
	for(i=0;i<=num-1;i++)
	{
		read(src,trn);
		strcat(obj,trn);
	}
	obj[len]='\0';
	puts(obj);
}












/*????   
 
?? 
???????????(????????)?????????????????????????
 
???? 
?????????????????100?
 
???? 
?????????????
 
???? 
I am a student
 
???? 
student a am I*/
 
