int change(char p[],int n)
{
	int i,result=0;
	for(i=0;i<n;i++)
	{
		result=result*10+p[i]-'0';
	}
	return result;
}
int manzu(int p[],int n)
{
	if(n>=p[0]&&n<p[1])
		return 1;
	return 0;
}
void main()
{
	int time[1000][2]={0},i=0,j=0,k,num,(*p)[2],max,count=0;
	char ch,temp[5]={'\0'};
	p=time;
	for(k=0;k<=1;k++)
	{
	while((ch=getchar())!='\n')
	{
		if(ch!=',')
			temp[i++]=ch;
		else {temp[i]='\0';time[j++][k]=change(temp,i);i=0;}///
	}
	temp[i]='\0';time[j++][k]=change(temp,i);i=0;
	num=j;
	j=0;
	}
	max=0;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<num;j++)
			if(manzu(p[j],i))///
				count++;
		if(count>max)
			max=count;
		count=0;
	}
	printf("%d %d",num,max);
}