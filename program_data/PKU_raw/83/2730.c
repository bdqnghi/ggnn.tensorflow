
void main()
{
	int xuefen[10],defen[10],t=0;
	int i,n,j,k;
	double gpa[10],total=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) scanf("%d",&xuefen[i]);
	for(i=0;i<n;i++) scanf("%d",&defen[i]);
	for(i=0;i<n;i++)
	{
		if(defen[i]>89) gpa[i]=4;
		else if(defen[i]>84) gpa[i]=3.7;
		else if(defen[i]>81) gpa[i]=3.3;
		else if(defen[i]>77) gpa[i]=3;
		else if(defen[i]>74) gpa[i]=2.7;
		else if(defen[i]>71) gpa[i]=2.3;
		else if(defen[i]>67) gpa[i]=2;
		else if(defen[i]>63) gpa[i]=1.5;
		else if(defen[i]>59) gpa[i]=1.0;
		else gpa[i]=0;
		total+=gpa[i]*xuefen[i];
		t+=xuefen[i];
	}
	total=total/t;
	printf("%.2f\n",total);
}
