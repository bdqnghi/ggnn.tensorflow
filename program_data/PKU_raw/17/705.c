
void main(void)
{
	while(1)
	{
		char str1[100],str2[100];
		gets(str1);

		if(feof(stdin))
			break;

		puts(str1);

		int k,n=strlen(str1),left[100],right[100],l=0,r=0;
		for(k=0;k<=n-1;k++)
		{
			if(str1[k]=='(')
			{
				left[l]=k;
				l++;
			}
			else if(str1[k]==')')
			{
				right[r]=k;
				r++;
			}
			else str2[k]=' ';
		}
		left[l]=100;
		right[r]=100;
		str2[n]='\0';

		int i,j,x=1,y=1;
		for(i=l-1;i>=0;i--)
		{
			int p=0;
			while(right[p]<left[i]) p++;
			if(x>(r-p)) str2[left[i]]='$';
			else
			{
				str2[left[i]]=' ';
				x++;
			}
		}
		for(j=0;j<=r-1;j++)
		{
			int q=0;
			while(left[q]<right[j]) q++;
			if(y>q) str2[right[j]]='?';
			else
			{
				str2[right[j]]=' ';
				y++;
			}
		}

		puts(str2);
	}
}