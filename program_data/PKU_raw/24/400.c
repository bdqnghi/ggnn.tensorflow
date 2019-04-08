
int main(int argc, char* argv[])
{
	char sentense[300];
	gets(sentense);
	sentense[strlen(sentense)]=' ';
	int num[300]={0};
	int i=0,a=0;
	while(i<=strlen(sentense))
	{
		if(sentense[i]==' ')
		{
			a++;
			i++;
		}
		else
		{
		    num[a]++;
		    i++;
		}
	}
	int max=0,min=0;
	for(i=0;i<a;i++)
	{
		if(num[i]>num[max])
			max=i;
		if(num[i]<num[min])
			min=i;
	}
	char l[300],s[300];
	int sum1=0,sum2=0,j=0,k=0;
	for(i=0;i<=max;i++)
	{
		sum1 += num[i]+1;
	}
	for(i=0;i<=min;i++)
	{
		sum2 += num[i]+1;
	}
	for(i=sum1-num[max]-1;i<sum1-1;i++)
	{
		l[j]=sentense[i];
		j++;
	}
	l[j]='\0';
	for(i=sum2-num[min]-1;i<sum2-1;i++)
	{
		s[k]=sentense[i];
		k++;
	}
	s[k]='\0';
	printf("%s\n%s\n",l,s);
	return 0;
}

