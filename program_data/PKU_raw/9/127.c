
void bubble_sort(int a[100], char b[100][10], int n)
{
	int i, j, temp;
	char temp_[10]={0}, empty[10]={0};
	for (j=1; j<n; j++)	
		for(i=0; i<n-j; i++)
		{		
			if (a[i]<a[i+1])		
			{			
				temp=a[i];
				strcpy(temp_,b[i]);
				a[i]=a[i+1];
				strcpy(b[i], empty);
				strcpy(b[i], b[i+1]);
				a[i+1]=temp;
				strcpy(b[i+1], empty);
				strcpy(b[i+1], temp_);
				
			}	
		}
}

int main()
{
	int age[100], Age_[100]={0}, age_[100];
	int n, i;
	char id[100][10], Id_[100][10]={0}, id_[100][10]={0}, empty[10]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%s%d", id[i], &age[i]);
	for(i=0; i<n; i++)
	{
		if(age[i]>=60)
		{
			Age_[i] = age[i];
			strcpy(Id_[i], id[i]);
		}
		else
		{
			age_[i] = age[i];
			strcpy(id_[i], id[i]);
		}
	}
	bubble_sort(Age_, Id_, n);
	for(i=0;i<n; i++)
	{
		if(strcmp(Id_[i], empty)==0)
			continue;
		else
			printf("%s\n", Id_[i]);
	}
	for(i=0;i<n; i++)
	{
		if(strcmp(id_[i], empty)==0)
			continue;
		else
			printf("%s\n", id_[i]);
	}
	return 0;
}





