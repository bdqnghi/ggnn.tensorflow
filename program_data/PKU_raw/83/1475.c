
float pnt(float scr);

int main()
{
	int n,i;
	float gpa=0,sum=0,score[10],credit[10];

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%f",&credit[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&score[i]);
		gpa+=pnt(score[i])*credit[i];
		sum+=credit[i];
	}

	gpa/=sum;

	printf("%.2f",gpa);

	return 0;
}

float pnt(float scr)
{
	if(scr>89)
		return 4.0;
	else if(scr>84)
		return 3.7;
	else if(scr>81)
		return 3.3;
	else if(scr>77)
		return 3.0;
	else if(scr>74)
		return 2.7;
	else if(scr>71)
		return 2.3;
	else if(scr>67)
		return 2.0;
	else if(scr>63)
		return 1.5;
	else if(scr>59)
		return 1.0;
	else
		return 0;
}