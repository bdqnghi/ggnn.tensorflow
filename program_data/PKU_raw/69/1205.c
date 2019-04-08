int main()
{
	char a[250], b[250], c[250], d[250], max[250], x[250], y[250];
	int i, min, up, max1;
	for (i=0; i<=249; i++)
	{
		a[i]='\0';
		b[i]='\0';
		c[i]='\0';
		d[i]='\0';
		max[i]='\0';
	}
	scanf("%s%s", a, b);
	for(i=0; i<=strlen(a)-1; i++)
	{
		if(a[i]=='0')
		{
			a[i] = '\0';
		}
		else break;
	}
	for(i=0; i<=strlen(b)-1; i++)
	{
		if(b[i]=='0')
		{
			b[i] = '\0';
		}
		else break;
	}
	min = (strlen(a)>strlen(b))?strlen(b):strlen(a);
	max1 = (strlen(a)>strlen(b))?strlen(a):strlen(b);
	if (strlen(b) == strlen(a)) strcpy(c, a);
	else
	{
		for(i=0; i<=max1-min-1; i++)
		{
			c[i] = 48;
		}
		strcat(c, (strlen(a)>strlen(b))?b:a);
	}
	strcpy(max, (strlen(a)<=strlen(b))?b:a);
	up = 0;
	for(i=strlen(c)-1; i>=0; i--)
	{
		if(max[i]+c[i]+up<106)
		{
			d[i] = c[i] + max[i] - 48 + up;
			up = 0;
		}
		else
		{
			d[i] = c[i] + max[i] - 48 - 10 + up;
			up = 0;
			up++;
		}
	}
	if (up!=0) printf("1%s\n", d);
	else printf("%s\n", d);
	return 0;
}