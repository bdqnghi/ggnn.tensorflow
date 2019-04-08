
char *jian(char *x, char *y, int m, int n)
{
	char *p1;
	char *p2;
	char *p3;
	p1 = (char *)malloc((m)*sizeof(char));
	p2 = (char *)malloc((m)*sizeof(char));
	p3 = (char *)malloc((m)*sizeof(char));
	strcpy(p1, x);
	strcpy(p2, y);
	p1 = p1 + m - 1;
 	p2 = p2 + n - 1;
	int t = m - 1;
	while(((*p1) >= '0' - 1) && ((*p1) <= '9'))
	{
		if((*p1) < (*p2))
		{
			p3[t] = (*p1) - (*p2) + 10 + '0';
			p1 --;
			*p1 = *p1 - '1' + '0';
			p2 --;
		}
		else if(((*p1) >= (*p2)) && ((*p2) >= '0') && ((*p2) <= '9'))
		{
			p3[t] = (*p1) - (*p2) + '0';
			p1 --;
			p2 --;
		}
		else 
		{
			p3[t] = (*p1);
			p1 --;
			//p2 --;
		}
		t --;
	}
	return(p3);

}

void main()
{
	int s;
	int i, j, k;
	char *a[10], *b[10];
	scanf("%d", &s);
	for(i = 0; i < s; i ++)
	{
		a[i] = (char *)malloc(1000*sizeof(char));
		b[i] = (char *)malloc(1000*sizeof(char));
	}
    for(i = 0; i < s; i ++)
	{
		scanf("%s", a[i]);
		scanf("%s", b[i]);
	}
	for(i = 0; i < s; i ++)
	{
		for(j = 0; j < strlen(a[i]); j ++)
		if(jian(a[i], b[i], strlen(a[i]), strlen(b[i]))[j] != '0')
		{
			k = j;
			break;
		}
	    for(j = k; j < strlen(a[i]); j ++)
		    printf("%c", jian(a[i], b[i], strlen(a[i]), strlen(b[i]))[j]);
		printf("\n");
	}

}