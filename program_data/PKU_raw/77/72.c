typedef struct
{
	int boy;
	int girl;
}OUT;

void main()
{
	OUT out[50];
	void sort(OUT *out,int k);
	int i,j,k = 0,len;
	char queue[101],boy,girl;

	gets(queue);
	len = strlen(queue);
	boy = queue[0];
	girl = queue[len - 1];

	while(1)
	{
		for(i = 0;i<len - 1;i++)
		{
			if(queue[i]==boy)
			{
				for(j = i + 1;queue[j]==0;j++);
				//????????
				if(queue[j]==girl)
				{
					queue[i] = 0;
					queue[j] = 0;
					out[k].boy = i;
					out[k].girl = j;
					k++;
					i = j;
				}
				else
					i = j - 1;
			}
		}
		if(k==len/2)
			break;
		//????len/2????????
	}

	sort(out,k);
	//???????
	for(i = 0;i<k;i++)
		printf("%d %d\n",out[i].boy,out[i].girl);
}

void sort(OUT *out,int k)
{
	int i,j,min,minum;
	OUT temp;
	for(i = 0;i<k-1;i++)
	{
		min = out[i].girl;
		minum = i;
		for(j = i + 1;j<k;j++)
		{
			if(min>out[j].girl)
			{
				min = out[j].girl;
				minum = j;
			}
		}
		if(minum - i)
		{
			temp = out[i];
			out[i] = out[minum];
			out[minum] = temp;
		}
	}
}