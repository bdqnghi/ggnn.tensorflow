int main()
{
	int a,b,c=3,f=3,h=6;
		scanf("%d",&a);
		if(a%2==0&&a>=6)
		{
				while(h<=a)
				{
					b=h-c;
					while(f<=sqrt(b))
					{
						if(b%f!=0)f=f+2; 
						if(b%f==0)
						loop:	b=b-2,c=c+2,f=3;
					}
					f=3;
					while(f<=sqrt(c))
					{
						if(c%f!=0)f=f+2; 
						if(c%f==0)goto loop;
					}
					printf("%d=%d+%d\n",h,c,b);
					h=h+2,f=3,c=3;
				}
		}
}