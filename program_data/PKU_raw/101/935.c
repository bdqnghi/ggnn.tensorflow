int main()
{
	int a,b,c,A,B,C,aw,bw,cw,Aw,Bw,Cw;
	int i,j,t;
	char m[3]={'A','B','C'},p;
	int n[3];
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				aw=((b>a)+(c==a));
				bw=((a>b)+(a>c));
				cw=((c>b)+(b>a));
				if(((a>b)&&(aw<bw))||((b>a)&&(bw<aw))||((b==a)&&(bw==aw)))
				{
					if(((c>b)&&(cw<bw))||((b>c)&&(bw<cw))||((b==c)&&(bw==cw)))
					{
						if(((a>c)&&(aw<cw))||((c>a)&&(cw<aw))||((c==a)&&(cw==aw)))
						{
							A=a;B=b;C=c;
							Aw=aw;Bw=bw;Cw=cw;
						}
					}
				}
			}
		}
	}
	n[0]=A;n[1]=B;n[2]=C;
	for(i=2;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];p=m[j];
				n[j]=n[j+1];m[j]=m[j+1];
				n[j+1]=t;m[j+1]=p;
			}
		}
	}
	printf("%c%c%c",m[0],m[1],m[2]);
	return 0;
}