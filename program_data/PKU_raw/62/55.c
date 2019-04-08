int main()
{
	char x[101];
	cin.getline(x,	101);
	int i,	n1,	j;
	n1	=	strlen(x);
	for(i	=	0;	i	<	n1;	i++)
	{
		if(x[i]	==	' ')
		{
			int count	=	0;
			for(j	=	i	+	1;	j	<	n1;	j++)
			{
				if(x[j]	==	' ')
				{
					count++;
				}
				else
				{
					break;
				}
			}
		    strcpy(x	+	i,	x	+	i	+	count);
			n1	=	n1	-	count;
		}
	}
	cout	<<	x	<<	endl;
	return 0;
}
