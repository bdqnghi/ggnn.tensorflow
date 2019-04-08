struct w
{
	char n;
	int w;
}a[4];	
void main()
{
	int z,q,s,l,i,j,t;
	char x;
	for(z=1;z<60;z++)
	for(q=1;q<60;q++)
	for(s=1;s<60;s++)
	for(l=1;l<60;l++)
	{
		if(z%10==0&&q%10==0&&s%10==0&&l%10==0&&z+q==s+l&&z+l>s+q&&z+s<q)
		{
		  a[0].n='z';a[0].w=z;
		  a[1].n='q';a[1].w=q;
		  a[2].n='s';a[2].w=s;
		  a[3].n='l';a[3].w=l;
		}
	}
		for(i=0;i<3;i++)
	for(j=0;j<3-i;j++)
	{
	 if(a[j].w<a[j+1].w)
	 {
        t=a[j].w;a[j].w=a[j+1].w;a[j+1].w=t;
         x=a[j].n;a[j].n=a[j+1].n;a[j+1].n=x;
	 }
        
	}
	for(i=0;i<4;i++)
		printf("%c %d\n",a[i].n,a[i].w);
}