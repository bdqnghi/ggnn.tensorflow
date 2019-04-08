
int countnum(char a[])
{
	int num=0;
	while(a[num]!='\0')
		num++;
	return num;
}

void  clean(char a[])
{
     int num=0;
     int lenth=0;
     while (a[lenth]!='\0')
     lenth ++;
     while(a[num]=='0')
     num++;
     for (int i=0;i<=(lenth-num);i++)
     {
         a[i]=a[i+num];
     }
}
     

void sort(char a[],int la,int max)
{
	int count=la;
	int differ=max-la;
	for(;count>=0;count--)
	{
		a[count+differ]=a[count];
	}
	for(int i=0;i<differ;i++)
		a[i]='0';
}

void entire(char a[],int la)
{
	char aa[1000];
	int count = la;
	for(;count>=0;count--)
	{
		aa[la-count]=a[count];
	}
	aa[la+1]='\0';
	for(int i=0;i<=la+1;i++)
	{
		a[i]=aa[i];
	}
}
int main()
{
	char a[1000];
	char b[1000];
	scanf("%s %s",a,b);
	//printf("%d",strlen(a));
	
	if((strlen(a)==1)&&(strlen(b)==1)&&(a[0]=='0')&&(b[0]=='0'));
	else
	{
	clean(a);
	clean(b);
    }
	//printf("%s\n%s\n",a,b);
	
	int la=countnum(a);
	int lb=countnum(b);
	int max=la;
	if(la<lb)max=lb;
	max=max+1;
	sort(a,la,max);
	sort(b,lb,max);
	max=max-1;
	entire(a,max);
	entire(b,max);
	int sign=0;
	char c[1000];
	for(int i=0;i<=max;i++)
	{
		int temp=sign+a[i]-'0'+b[i]-'0';
		if(temp>9)
		{
			sign =1;
			temp=temp-10;
		}
		else 
			sign=0;
		c[i]=temp+'0';
	}
	c[max+1]='\0';
	max=max;
	entire(c,max);	
	if(c[0]=='0')
	{
		for(int j=1;j<=max;j++)
			printf("%c",c[j]);
		printf("\n");
	}
	else
	{
    printf("%s\n",c);
	}
	
	
}
