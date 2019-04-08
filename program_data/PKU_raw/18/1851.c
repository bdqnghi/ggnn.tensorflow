int minih(int numh,int *p)/*???????*//*??numh???*//*?????*p*/
{
	int min;
	min=*p;
	int i;
	for(i=1;i<=numh;i++)
	{
		if(min>*(p+i-1))
		{
			min=*(p+i-1);
		}
		else
		{}
	}
	return min;
}
int minil(int numl,int *p)/*???????*//*??numh???*//*?????*p*/
{
	int min;
	min=*p;
	int i;
	for(i=1;i<=numl;i++)
	{
		if(min>*(p+101*(i-1)))
		{
			min=*(p+101*(i-1));
		}
		else
		{}
	}
	return min;
}
int main()
{
	int a[101][101];
	int *p;
	p=&a[0][0];
	int i,j,k,n;
	int minor;
	int sum;
	scanf("%d",&n);
	int hang,lie;
	for(i=1;i<=n;i++)
	{	
		/*??????sum???   hang   lie   ?n    */
		hang=n;
		lie=n;
		sum=0;
		/*??????
		????*/
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				scanf("%d",p+101*(j-1)+k-1);
			}
		}
		/*?????????????????*/
		for(minor=1;lie>1;minor++)
		{
			/*???????*/
			for(j=1;j<=hang;j++)
			{
				int minihang;
				/*?j????*(p+101*(j-1))*/
				minihang=minih(lie,(p+101*(j-1)));
				for(k=1;k<=lie;k++)
				{
					*(p+101*(j-1)+k-1)-=minihang;
				}
			}
			/*???????*/
			for(j=1;j<=lie;j++)
			{
				int minilie;
				/*?j????*(p+(j-1))*/
				minilie=minil(hang,(p+(j-1)));
				for(k=1;k<=hang;k++)
				{
					*(p+(j-1)+101*(k-1))-=minilie;
				}
			}
			sum+=*(p+102);
			/*????????????????hang-1   */
			for(j=2;j<=hang;j++)
			{
				for(k=1;k<=lie;k++)
				{
					*(p+101*(j-1)+k-1)=*(p+101*j+k-1);
				}
			}
			hang--;
			/*????????????????lie-1   */
			for(j=2;j<=lie;j++)
			{
				for(k=1;k<=hang;k++)
				{
					*(p+101*(k-1)+j-1)=*(p+101*(k-1)+j);
				}
			}
			lie--;
		}
		printf("%d\n",sum);
	}
	return 0;
}