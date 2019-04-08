// ????.cpp : ??????????????
//


int main()
{
	int y=0,k,x,temp,p,q,t,i,j=0,boy[100],girl[100];
	char a[100];
	char sex[2];
	cin >> a;
	sex[0] = a[0];
	for (i=1;;i++)
	{
		if (a[i]!=a[0])
		{
			sex[1]=a[i];
			break;
		}
	}
	for (i=0;;i++)
	{
		for (k=0;a[k]!='\0';k++)
		{
			if (a[k]!='*')
			{
				y=1;
			}
		}
		if (y==0)
		{
			break;
		}
		y=0;
		if (a[i]=='*')
		{
			continue;
		}
		if (a[i+1]=='\0')
		{
			i=-1;
			continue;
		}
		if (a[i] == sex[0])
		{
			for (k=i+1;a[k]!=sex[0];k++)
			{
				if (a[k]==sex[1])
				{
					a[i]='*';
					a[k]='*';
					boy[j] = i;
					girl[j] = k;
					j++;
					break;
				}
			}
		}
	}
	for (p=0;p<j-1;p++)
	{
		for (q=0;q<j-1-p;q++)
		{
			if (girl[q]>girl[q+1])
			{
				temp=girl[q+1];
				girl[q+1]=girl[q];
				girl[q]=temp;
				temp=boy[q+1];
				boy[q+1]=boy[q];
				boy[q]=temp;
			}
		}
	}
	for (x=0;x<=j-1;x++)
	{
		cout << boy[x] << " " << girl[x] << endl;
	}
	return 0;
}
