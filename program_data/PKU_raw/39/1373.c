void main ( )
{
	int n,i,j;
	char name[100][20],c[100],d[100];
	int a[100],b[100],e[100],t[100],p=0,tot=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",&name[i],&a[i],&b[i],&c[i],&d[i],&e[i]);
	for(i=0;i<n;i++)
	{   
		t[i]=0;
		if(a[i]>80 && e[i]>0)
			t[i]=t[i]+8000;
		if(a[i]>85 && b[i]>80)
			t[i]=t[i]+4000;
		if(a[i]>90)
			t[i]=t[i]+2000;
		if(a[i]>85 && d[i]==89)
			t[i]=t[i]+1000;
		if(b[i]>80 && c[i]==89)
			t[i]=t[i]+850;
		if(t[i]>p)
			p=t[i];
		  tot=tot+t[i];
	}
j=0;
while(t[j]<p)
 j++;
printf("%s\n",name[j]);
printf("%d\n",p);
printf("%d\n",tot);
}





