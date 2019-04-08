int main()
{
	int A[4],B[4],i,j,d,d1,d2[3],d3,d4;
	for (i=1;i<4;i++)
		scanf("%d",&A[i]);
	for (i=1;i<4;i++)
		scanf("%d",&B[i]);
	switch(A[2])
	{
		case 1: 
			d2[1]=A[3];
			break;
		case 2:
			d2[1]=A[3]+31;
			break;
		case 3: 
			d2[1]=A[3]+59;
			break;
		case 4: 
			d2[1]=A[3]+90;
			break;
		case 5: 
			d2[1]=A[3]+120;
			break;
		case 6: 
			d2[1]=A[3]+151;
			break;
		case 7: 
			d2[1]=A[3]+181;
			break;
		case 8: 
			d2[1]=A[3]+212;
			break;
		case 9: 
			d2[1]=A[3]+243;
			break;
		case 10: 
			d2[1]=A[3]+273;
			break;
		case 11: 
			d2[1]=A[3]+304;
			break;
		case 12: 
			d2[1]=A[3]+334;
			break;
	}
	if (A[1]%4==0 && A[1]%100!=0 && A[2]>2)
		d2[1]++;
	if (A[1]%400==0 && A[2]>2)
		d2[1]++;
	switch(B[2])
	{
		case 1: 
			d2[2]=B[3];
			break;
		case 2:
			d2[2]=B[3]+31;
			break;
		case 3: 
			d2[2]=B[3]+59;
			break;
		case 4: 
			d2[2]=B[3]+90;
			break;
		case 5: 
			d2[2]=B[3]+120;
			break;
		case 6: 
			d2[2]=B[3]+151;
			break;
		case 7: 
			d2[2]=B[3]+181;
			break;
		case 8: 
			d2[2]=B[3]+212;
			break;
		case 9 : 
			d2[2]=B[3]+243;
			break;
		case 10 : 
			d2[2]=B[3]+273;
			break;
		case 11 : 
			d2[2]=B[3]+304;
			break;
		case 12 : 
			d2[2]=B[3]+334;
			break;
	}
	if (B[1]%4==0 && B[1]%100!=0 && B[2]>2)
		d2[2]++;
	if (B[1]%400==0 && B[2]>2)
		d2[2]++;
	d1=0;
	if (A[1]<=B[1])
	{
		for(i=A[1];i<B[1];i++)
		{
			if (i%4==0 && i%100!=0)
				d1=d1+366;
			else if (i%400==0)
				d1=d1+366;
			else
				d1=d1+365;
		}
		d=d1+d2[2]-d2[1];
	}
	else
	{
		for(i=B[1];i<A[1];i++)
		{
			if (i%4==0 && i%100!=0)
				d1=d1+366;
			else if (B[1]%400==0)
				d1=d1+366;
			else
				d1=d1+365;
		}
		d=d1+d2[1]-d2[2];
	}
	printf("%d",d);
	return 0;
}