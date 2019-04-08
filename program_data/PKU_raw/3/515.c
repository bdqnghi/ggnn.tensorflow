

int a[1000];
int n,k;
int *final;

int *point1=&n,*point2=&k;

int main()
{
	int kk=1;
scanf("%d%d",point1,point2);

point1=a;
final=point1+n;


for(;point1<final;point1++)
scanf("%d",point1);
point1=a;
for(;point1<final-1;point1++)
{
if(kk==0)
break;
	for(point2=point1+1;point2<final;point2++)
	{
	if(*point1+*point2==k)
	{printf("yes");
	kk=0;
	break;
	}
	
	
	}

}
if(kk==1)
printf("no");
return(0);
}