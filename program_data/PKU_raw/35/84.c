void main()
{
int a,b,i,j,m[10][10],(*p)[10];
p=m;
scanf("%d,%d",&a,&b);
for(i=0;i<a;i++)
	for(j=0;j<b;j++)scanf("%d",*(p+i)+j);

int max,min,k,temp;p=m;
int you=0;
for(i=0;i<a;i++)
	{max=**p;
	for(j=0;j<b;j++)if(*(*(p+i)+j)>max){max=*(*(p+i)+j);k=j;}
	p=m;min=max;
	for(temp=0;temp<a;temp++)if(*(*(p+temp)+k)<min) min=*(*(p+temp)+k);
	if(max==min){printf("%d+%d\n",i,k);you=1;}
	}
if(you==0)printf("No\n");
}
