int main()
{
	char s[1500];
	int t[4];
	int i,j,k;
	int a,b,c;
	gets(s);
	a=-1;
	b=-1;
	j=0;
	for (i=0;i<strlen(s)+1;i++)
	{
		if (s[i]!=',' && s[i]!='\0')
		{
			t[j]=s[i]-'0';
			j++;
		}
		else
		{
			switch(j)
			{
			case 1:c=t[0];break;
			case 2:c=10*t[0]+t[1];break;
			case 3:c=100*t[0]+10*t[1]+t[2];break;
			case 4:c=1000*t[0]+100*t[1]+10*t[2]+t[3];break;
			default:break;
			}
			j=0;
			if (c>a)
			{
				b=a;
				a=c;
			}
			else if (c<a && c>b) b=c;
		}
	}
	if (b==-1) printf("No");
	else printf("%d",b);
	return 0;
}