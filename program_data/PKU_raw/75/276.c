int main()
{
	int HalaMadrid[10000]={0};
	int BeatFCBarcelona[10000]={0};
	int n;
	int t[1000]={0};
	int max=0;
	int i,j;
for(i=0;i<10000;i++)
HalaMadrid[i]=-1;
for(i=0;i<10000;i++)
BeatFCBarcelona[i]=-1;
for(i=0;i<10000;i++)
{
if(i==0)
scanf("%d",&HalaMadrid[i]);
else scanf(",%d",&HalaMadrid[i]);
}
for(i=0;i<10000;i++)
{
if(i==0)
scanf("%d",&BeatFCBarcelona[i]);
else scanf(",%d",&BeatFCBarcelona[i]);
}
for(i=0;HalaMadrid[i]!=-1;i++);
n=i;
for(i=0;i<1000;i++)
{
	for(j=0;j<n;j++)
	{
		if(i+0.5>=HalaMadrid[j]&&i+0.5<BeatFCBarcelona[j])
			t[i]++;
	}
}
for(i=0;i<1000;i++)
{
	if(max<t[i])
		max=t[i];
}
printf("%d %d\n",n,max);
	return 0;
}	
