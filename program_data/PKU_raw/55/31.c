
int huan(char k);
char huan2(int k);

int main()
{
	int a,b;
	char *ps,*result;
	int *tmp;
	ps = (char*) malloc (sizeof(long)*8);
	tmp = (int*) malloc (sizeof(long)*8);
	result = (char*) malloc (sizeof(long)*8);
	scanf("%d",&a);
	scanf("%s",ps);
	scanf("%d",&b);
	int k = strlen(ps);
	int i;
	long tmp2 = 0;
	for(i = 0;ps[i] != '\0';i++)
	{
		tmp[i] = huan(ps[i]);
		tmp2 += (long) (tmp[i] * pow(a,k-1-i));
        //printf("t%ld\n",(long) (tmp[i] * pow(a,k-1-i)));
	}
	//printf("t%ld\n",tmp2);
	int l = i - 1;
	int *tmp3 = (int*) malloc (sizeof(long)*8);
	for(l = 0 ; tmp2 != 0; l++)
	{
		tmp3[l] = tmp2 % b;
		//printf("t3 %d l%d\n",tmp3[l],l);
		tmp2 = tmp2 / b;
		//printf("l%d\n",l);
	}
	//printf("l%d\n",l);
	int m;
	l--;
	for (m = 0;l >= 0;l--,m++)
	{
		result[m] = huan2(tmp3[l]);
		//printf("r%c l%d\n",result[m],l);
	}
	result[m] = '\0';
	printf("%s",result);
	printf("\n");
         free(ps);
         free(tmp);
         free(result);
	return 0;
}

int huan(char k)
{
	if ( k <= 57)
	{
		return k-48;
	}
	else if ( k >=97 && k <= 122)
	{
		return k - 87;
	}
	else if ( k >= 65 && k <= 90)
	{
		return k - 55;
	}
	return 0;
}

char huan2(int k)
{
	if ( k <= 9 )
	{
		return k + 48;
	}
	if ( k >= 10 )
	{
		return k + 55;
	}
	return 0;
}
