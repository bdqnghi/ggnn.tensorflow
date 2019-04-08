void main()
{char str[1000];
int shu[50];
int i,j=0,k=0,max,min;
int sum1=0,sum2=0;
gets(str);
for(i=0;i<strlen(str);i++)
{
	if(str[i]!=' ')
		j++;
	else
	{
		shu[k]=j;
		k++;
		j=0;
	}

	if(i==(strlen(str)-1))
		shu[k]=j;
}
max=shu[0];min=shu[0];
for(i=0;i<=k;i++)
{
	if(shu[i]>max)  max=shu[i];
}
for(i=0;i<=k;i++) 
{
	if(shu[i]<min) min=shu[i];
}
for(i=0;i<=k;i++)
{
	if(shu[i]==max) break;
	else
	{
		sum1=sum1+shu[i];
	}
}
for(j=i+sum1;j<i+sum1+shu[i];j++)
printf("%c",str[j]);
printf("\n");
for(i=0;i<=k;i++)
{
	if(shu[i]==min) break;
	else
	{
		sum2=sum2+shu[i];
	}
}
for(j=i+sum2;j<i+sum2+shu[i];j++)
printf("%c",str[j]);

}
