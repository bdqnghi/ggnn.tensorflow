int store(char str[],char sto[],int len)
{
	int i,m=0;
	for(i=0;i<len;i++)
		if(  str[i]>='a'  &&  str[i]<='z'  )
		{sto[m]=str[i];
		m++;}
	return (m);
}
void sort(char sto[],int m)
{
	int i,j,k;
	char t;
	for(i=0;i<m-1;i++)
	{k=i;
		for(j=i+1;j<m;j++)
			if(sto[j]<sto[k]) k=j;
		if(k!=i)
		{ t=sto[i];
		sto[i]=sto[k];
		sto[k]=t; }
	}
}


int count(char sto[],char newstr[26],int m,int time[100])
{
	int i,j,flag;
	int k=0;
	for(i=0;i<m;i++)
	{flag=1;
		for(j=0;j<=k;j++)
		{
			if(newstr[j]==sto[i])//??????????
			{time[j]++;
			flag=0;
			break;}
		}
		if(flag) {newstr[k]=sto[i];
		time[k]++;
		k++;}//??????????????
	}
	return (k);
}
void output(char newstr[26],int time[100],int k)
{
	int i;
	for(i=0;i<k;i++)
		printf("%c=%d\n",newstr[i],time[i]);
}
void main()
{
	char str[300],sto[300]={'\0'},newstr[26]={'\0'};
	int time[100]={0},len,temp;
	gets(str);
	len=strlen(str);
	temp=store(str,sto,len);
	if(temp==0) printf("No\n");
	else{
	sort(sto,temp);
	temp=count(sto,newstr,temp,time);
	output(newstr,time,temp);
	}
}