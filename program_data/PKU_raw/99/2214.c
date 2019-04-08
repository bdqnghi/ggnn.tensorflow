
int main(int argc, char* argv[])
{
	int n, age[100], i, a=0, b=0, c=0, d=0;
	

	scanf("%d\n", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &age[i]);
		if(age[i] > 60)
		{
			d++;
		}
		else if(age[i] <= 60 && age[i] >=36)
		{
			c++;
		}
		else if(age[i] <= 35 && age[i] >= 19)
		{
			b++;
		}
		else 
		{
			a++;
		}
	}

	

	printf("1-18: %.2lf%%\n", (double)a/n*100);
	printf("19-35: %.2lf%%\n", (double)b/n*100);
	printf("36-60: %.2lf%%\n", (double)c/n*100);
	printf("60??: %.2lf%%\n", (double)d/n*100);

	return 0;
}

