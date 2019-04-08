int kuso(int x)
{
	int i;
	for(i=0;;i++)
	if(x>=pow(2,i-1)&&x<pow(2,i))
		break;
	return(i);
}
void main()
{
	int a,b,a1,b1,a2[100],b2[100],b3,a3,i,j,x,y;
	scanf("%d %d",&a,&b);
	a1=kuso(a);
	b1=kuso(b);
	x=a1;
	y=b1;
	while(a1!=0)
	{	
		a2[a1]=a;
		a3=(a-pow(2,a1-1))/2+pow(2,a1-2);
		a=a3;
		a1--;
	}
	while(b1!=0)
	{	
		b2[b1]=b;
		b3=(b-pow(2,b1-1))/2+pow(2,b1-2);		
		b=b3;
		b1--;
	}

	for(i=x;i>0;i--)
		for(j=y;j>0;j--)
			if(a2[i]==b2[j])
			{
				printf("%d",a2[i]);
				goto loop;
			}
loop:printf("\n");
}



