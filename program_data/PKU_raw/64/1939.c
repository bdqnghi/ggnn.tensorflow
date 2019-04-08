
struct point {  int x;
	   int y;
	   int z; };
double dis(struct point b,struct point c);
int main()
{
	int n,a,i=0,j=0,k;
	struct point str[10];
	struct thr{
		float d;
		int e;
		int f; };
		struct thr temp={0};
		struct thr str1[10000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&str[i].x,&str[i].y,&str[i].z);
	i=0;
	for(j=0;j<n-1;j++)
	{    k=j+1;
		for(k=j+1;k<n;k++)
		{    str1[i].d=dis(str[j],str[k]);
		    str1[i].e=j;
			str1[i].f=k;
			i++;
		}
	}
	a=i;
	j=0;
	k=0;
	for(j=0;j<a-1;j++)
	{     k=0;
		for(k=0;k<a-j;k++)
		{
			if(str1[k].d<str1[k+1].d)
			{temp=str1[k];
			     str1[k]=str1[k+1];
				 str1[k+1]=temp;
			}
		}
	}
	i=0;
	for(i=0;i<a;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f",str[str1[i].e].x,str[str1[i].e].y,str[str1[i].e].z,str[str1[i].f].x,
	str[str1[i].f].y,str[str1[i].f].z,str1[i].d);
		printf("\n");
	}
	return 0;
}

double dis(struct point b,struct point c)
{
   return sqrt(pow((b.x-c.x),2)+pow((b.y-c.y),2)+pow((b.z-c.z),2));
}
