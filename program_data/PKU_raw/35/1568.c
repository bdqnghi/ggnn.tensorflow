int main()
{
	int a(int b[8][8],int c,int d,int l[2]);
	int e,f,g,k,h[8][8],j[2]={0};
	scanf("%d,%d",&e,&f);
	for(g=0;g<e;g++)
	{
		for(k=0;k<f;k++)
		{
			scanf("%d",&h[g][k]);
		}
	}
		if(a(h,e,f,j))
			printf("%d+%d\n",j[0],j[1]);
		else
			printf("No\n");
		return 0;
}
int a(int b[8][8],int c,int d,int l[2])
{
	int i=0,o=0,p=0,r=0,s,t=0,z=0;
	int n[8]={0},q[8]={0};
	for(o=0;o<c;o++)
	{
		for(p=0;p<d;p++)
		{
			
           if(q[o]<b[o][p])
		   {
			   q[o]=b[o][p];
			   n[o]=p;
		   }

		}
	}
	for(r=0;r<c;r++)
	{
		s=n[r];
       for(o=0;o<c;o++)
	   {
		   if(b[o][s]>=q[r])
			   t=t+1;
	   }
	   if(t==c)
	   {
		   if(z==0)
		   {
		   i=1;
		   l[0]=r;
		   l[1]=n[r];
		   z=z+1;
		   }
	   }
	   t=0;
	}
	return i;

}