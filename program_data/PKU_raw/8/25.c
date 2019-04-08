int a[50],b[50],e[100];
int c,d;
void input()
{
	int i;
	scanf("%d%d",&c,&d);
	for(i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<d;i++)
	{
		scanf("%d",&b[i]);
	}
}
void change()
{
	int i,j,t;
	for(j=0;j<c-1;j++)
	{
	     for(i=0;i<c-1;i++)
		 {
		     if(a[i]>a[i+1])
			 {
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			 }
		 }
	}
	for(j=0;j<d-1;j++)
	{

	     for(i=0;i<d-1;i++)
		 {
		    if(b[i]>b[i+1])
			{
			t=b[i];
			b[i]=b[i+1];
			b[i+1]=t;
			}
		 }
	}
}
void to()
{
	int i;
     for(i=0;i<c;i++)
	 {
		 e[i]=a[i];
	 }
	 for(i=0;i<d;i++)
	 {
		 e[i+c]=b[i];
	 }
}
	 
void output()
{
	int i;
    for(i=0;i<(c+d)-1;i++)
	{printf("%d ",e[i]);}
	printf("%d",e[c+d-1]);

}
void main()
{
	 input();
	 change();
	 to();
	 output();
}
