int main(int argc, char* argv[])
{
	int a,b,c,i,s[13],t,n;
	s[0]=0;s[1]=31;s[3]=31;s[4]=30;s[5]=31;s[6]=30;s[7]=31;s[8]=31;s[9]=30;s[10]=31;s[11]=30;s[12]=31;
	t=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<b;i++)
	{
		if(a%4==0&&a%100!=0||a%400==0)
		{
			s[2]=29;
		t=s[i]+t;
		}
		else
		{s[2]=28;
		t=s[i]+t;
		}
	}
	n=t+c;
	printf("%d\n",n);
	return 0;
}