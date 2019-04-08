struct children
{
	char bracket;
	int code;
};
char boy,girl;

void main()
{
	void func(struct children chd[],int n);
	int scan(struct children *p,char string[100]);
	struct children chd[100]={'\0',0};
	struct children *p;
	p=chd;
	char str[100];
	scanf("%s",str);
	int len=scan(p,str);
    boy=str[0];
    int point=0;
	for(point=0;point<len;point++)
	{
		if(str[point]!=boy)
		{
			girl=str[point];
			break;
		}
	}
	func(chd,len);	
}

void func(struct children chd[],int n)
{
	void exile(struct children chd[],int friendcode,int lenx);
	int j=0;
	for(j=0;j<n;j++)
	{
		if(chd[j].bracket=='\0') break;
	    if(chd[j].bracket==boy && chd[j+1].bracket==girl)
		{
			printf("%d %d\n",chd[j].code,chd[j+1].code);
			exile(chd,j,n);
		    j=j-1;
			n=n-2;
		}
		else
		{
			if(chd[j].bracket==boy &&chd[j+1].bracket==boy) func(chd+1,n-1);
			else 
			{
			    if(chd[j].bracket==girl)
				{   
				    func(chd-1,n+1);
				}
			}
		}
	}
}

int scan(struct children *p,char string[100])
{
	int i=0;
	while(string[i]!='\0')
	{
        p->bracket=string[i];
		p->code=i;
		p+=1;
		i+=1;
	}
	return(i);
}
void exile(struct children chd[],int friendcode,int lenx)
{
	int k=0;
	for(k=friendcode;k<lenx-1;k++)
	{
		chd[k]=chd[k+2];
	}
}