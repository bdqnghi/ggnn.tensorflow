
int isRun(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main(int argc, char* argv[])
{
	int startYear, startMonth, startDay ;
	int endYear, endMonth, endDay;

	int startOffset=0, endOffset=0; ///??????????startyear 1-1
	int Month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, j;

	scanf("%d%d%d",  &startYear, &startMonth, &startDay);
	scanf("%d%d%d",&endYear, &endMonth, &endDay);

	if (isRun(startYear))
	{
		if (startMonth>2)
		{
			for (i=0; i<startMonth-1; i++)
			{
				startOffset+=Month[i];
			}
			startOffset+=1;
			startOffset+=startDay-1;
		}
		else
		{
			for (i=0; i<startMonth-1; i++)
			{
				startOffset+=Month[i];
			}
			startOffset+=startDay-1;
		}
	}
	else
	{
		for (i=0; i<startMonth-1; i++)
		{
			startOffset+=Month[i];
		}
		startOffset+=startDay-1;
	}
	//////////////////////////////////////////////////////////////////////////

	for (j=startYear; j<endYear; j++)
	{
		if (isRun(j))
		{
			endOffset+=366;
		}
		else
			endOffset+=365;
	}

	if (isRun(endYear))
	{
		if (endMonth>2)
		{
			for (i=0; i<endMonth-1; i++)
			{
				endOffset+=Month[i];
			}
			endOffset+=1;
			endOffset+=endDay-1;
		}
		else
		{
			for (i=0; i<endMonth-1; i++)
			{
				endOffset+=Month[i];
			}
			endOffset+=endDay-1;
		}
	}
	else
	{
		for (i=0; i<endMonth-1; i++)
		{
			endOffset+=Month[i];
		}
		endOffset+=endDay-1;
	}

	if (endOffset>=startOffset)
	{
		printf("%d",(endOffset-startOffset));
	}
	
	return 0;
}