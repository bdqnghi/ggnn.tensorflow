void main()
{
long int f=0,e=0,b,c,i,g,k=0,j=0,v=1;
char d[100],a[100];
int h[100];
scanf("%d",&b);//d???
for(i=0;;i++)
{a[i]=getchar();
if (a[i]==' ') break;
}//??????
for(i=0;;i++)
{d[i]=getchar();
if (d[i]==' ') break;j++;
}
scanf("%d",&c);//?????
//for(i=0;i<4;i++)
//printf("%c\n",d[i]);
//printf("%d %d",b,c);
g=b;//????
	{
	for(i=0;;i++)
	{if (d[i]==' ') break;
	if (d[i]< 59 ) h[i]=d[i]-48;
	else if (d[i]<='Z') h[i]=d[i]-55;
	else h[i] = d[i]-87;
//printf("%d\n",h[i]);
	};
	for(i=j-1;i>=0;i--)
	{f=f+h[i]*b/g;b=b*g;}

//	printf("%d\n",f);//??
	}//??10
	{
		for(i=0;;i++)
		{
		h[i]=f%c;f=f/c;k++;
		if (f==0) break;
		};//??
for(i=0;i<k;i++)
{	if (h[i]<=9) 
		d[i]=h[i]+48;
	else d[i]=h[i]+55;
}
	for(i=k-1;i>=0;i--)
		if (j>=10) {printf("2147483647");break;}
else	printf("%c",d[i]);
	printf("\n");//????
	}
}
