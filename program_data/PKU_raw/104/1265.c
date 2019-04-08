
int main(int argc, char* argv[])
{
	int iaX[11], iaY[11];
	int x,y, i, j, ilenx=0, ileny=0;
	int itemp;
	int imin;
	scanf("%d%d", &x, &y);
	for (i=0; i<11; i++)
	{
		iaX[i]=-1;
		iaY[i]=-1;
	}

	i=0;
	while(x>0)
	{
		iaX[i++]=x;
		x/=2;
		ilenx++;
	}
	i=0; j=ilenx-1;
	while(i<j)
	{
		itemp=iaX[i];
		iaX[i]=iaX[j];
		iaX[j]=itemp;
		i++; j--;
	}

	i=0;
	while(y>0)
	{
		iaY[i++]=y;
		y/=2;
		ileny++;
	}
	i=0; j=ileny-1;
	while(i<j)
	{
		itemp=iaY[i];
		iaY[i]=iaY[j];
		iaY[j]=itemp;
		i++; j--;
	}

	imin=ilenx>ileny? ileny:ilenx;
	for (i=0;i<imin; i++)
	{
		if (iaX[i]!=iaY[i])
		{
			break;
		}
	}
	printf("%d", iaX[--i]);

	return 0;
}