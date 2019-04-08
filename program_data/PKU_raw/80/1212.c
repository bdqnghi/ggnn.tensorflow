void main()
{
	long int sy,sm,sd,ey,em,ed,a,b,i,j,k,x;
	scanf("%d %d %d %d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
	a=1;i=0;

	while(a<sy)
	{
		if((a%4==0 &&a%100!=0)||(a%400==0)) 
		{i++;a++;}
		else
			a++;
	}
	if(((sy%4==0 &&sy% 100 != 0)||(sy% 400 ==0))&&(sm>2))
		i++;

	b=1;j=0;
	while(b<sm)
	{
		if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
		{j++;
		}
		else 
		{
			if(b==2)
				j=j-2;
		}
		b++;
	}
	k=sy*365+sm*30+sd+j+i;


	long int A,B,I,J,K;
	I=0;A=1;

	while(A<ey)
	{
		if((A%4==0 &&A% 100 != 0)||(A%400 ==0))
		{
			I++;
			A++;
		}
		else
			A++;
	}
	if(((ey%4==0&&ey%100!=0)||(ey% 400 ==0))&&(em>2))
		I++;

	B=1;J=0;
	while(B<em)
	{
		if((B==1)||(B==3)||(B==5)||(B==7)||(B==8)||(B==10)||(B==12))
		{J++;
		}
		else
		{
			if(B==2)
				J=J-2;
		}
		B++;
	}
	K=ey*365+em*30+ed+J+I;
	x=K-k;


	printf("%d\n",x);
}