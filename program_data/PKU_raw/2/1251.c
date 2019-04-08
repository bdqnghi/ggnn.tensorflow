int main(int argc, char* argv[])
{
	int m,i,j,A[26]={0},B[26];
	char s;
	scanf("%d",&m);
	struct book{
		int num;
		char n[26];
	}*book;
    book=(struct book*)malloc(sizeof(struct book)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&book[i].num,book[i].n);
		for(j=0;book[i].n[j]!='\0';j++)
		{
			switch(book[i].n[j])
			{
			case 65:A[0]++;break;
			case 66:A[1]++;break;
			case 67:A[2]++;break;
			case 68:A[3]++;break;
			case 69:A[4]++;break;
			case 70:A[5]++;break;
			case 71:A[6]++;break;
			case 72:A[7]++;break;
			case 73:A[8]++;break;								
			case 74:A[9]++;break;									
			case 75:A[10]++;break;										
			case 76:A[11]++;break;											
			case 77:A[12]++;break;												
			case 78:A[13]++;break;													
			case 79:A[14]++;break;																					
			case 80:A[15]++;break;															
			case 81:A[16]++;break;																
			case 82:A[17]++;break;																	
			case 83:A[18]++;break;																		
			case 84:A[19]++;break;												
			case 85:A[20]++;break;										    	
			case 86:A[21]++;break;												
			case 87:A[22]++;break;												
			case 88:A[23]++;break;												
			case 89:A[24]++;break;																		
			case 90:A[25]++;break;												
			}
		}
	}
	int k,max;
	//for(i=0;i<26;i++)
	//	printf("%d\n",A[i]);
	for(i=0;i<26;i++)
	{
		B[i]=A[i];
	}
	for(i=25;i>0;i--)
	{
		if(B[i]>B[i-1])
		{
			B[i-1]=B[i];

			max=B[i];
		}
		else
		{
			max=B[i-1];
		}
	}
	for(i=25;i>=0;i--)
	{
		if(A[i]==max)
			k=i;
	}
	//printf("%d",k);
	s=k+65;
	printf("%c\n%d\n",s,max);
	for(i=0;i<m;i++)
	{
		for(j=0;book[i].n[j]!='\0';j++)
		{
			if(book[i].n[j]==s)
			{
				printf("%d\n",book[i].num);
				break;
			}
		}
	}

	return 0;
}
