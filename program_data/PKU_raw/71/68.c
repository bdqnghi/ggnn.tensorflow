
int DATE0(int M0)
{
	int DATE0;
    switch(M0)
	{
	    case 1:
			DATE0=1;
			break;
		case 2:
			DATE0=32;
			break;
		case 3:
			DATE0=61;
			break;
		case 4:
			DATE0=92;
		    break;
		case 5:
			DATE0=122;
			break;
		case 6:
			DATE0=153;
			break;
		case 7:
			DATE0=183;
			break;
		case 8:
			DATE0=214;
			break;
		case 9:
			DATE0=245;
			break;
		case 10:
			DATE0=275;
			break;
		case 11:
			DATE0=306;
			break;
		case 12:
			DATE0=336;
			break;
	}
	return DATE0;
}

int DATE1(int M1)
{
	int DATE1;
    switch(M1)
	{
	    case 1:
			DATE1=1;
			break;
		case 2:
			DATE1=32;
			break;
		case 3:
			DATE1=60;
			break;
		case 4:
			DATE1=91;
			break;
		case 5:
			DATE1=121;
			break;
		case 6:
			DATE1=152;
			break;
		case 7:
			DATE1=182;
			break;
		case 8:
			DATE1=213;
			break;
		case 9:
			DATE1=244;
			break;
		case 10:
			DATE1=274;
			break;
		case 11:
			DATE1=305;
			break;
		case 12:
			DATE1=335;
			break;
	}
	return DATE1;
}

int main()
{
	int i,n,YEAR[210],MONTH1[210],MONTH2[210],P[210],Q[210],A[210],B[210];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&YEAR[i],&MONTH1[i],&MONTH2[i]);
	    if(YEAR[i]%4!=0)
		{
			P[i]=1;
		}
		else if(YEAR[i]%4==0&&YEAR[i]%100!=0)
		{
			P[i]=0;
		}
		else if(YEAR[i]%100==0&&YEAR[i]%400!=0)
		{
			P[i]=1;
		}
		else
		{
			P[i]=0;
		}
		if(P[i]==0)
		{
			A[i]=DATE0(MONTH1[i]);
			B[i]=DATE0(MONTH2[i]);
			if((A[i]-B[i])%7==0)
			{
				Q[i]=1;
			}
			else
			{
				Q[i]=0;
			}
		}
		else
		{
			A[i]=DATE1(MONTH1[i]);
			B[i]=DATE1(MONTH2[i]);
			if((A[i]-B[i])%7==0)
			{
				Q[i]=1;
			}
			else
			{
				Q[i]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i!=0)
		{
			printf("\n");
		}
		if(Q[i]==1)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
    return 0;
}












