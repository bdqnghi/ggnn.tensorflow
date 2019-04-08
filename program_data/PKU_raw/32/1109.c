int main() 
{
	char str1[102], str2[102]; 
	int result[102]; 
	int n,i,j,k; 
	scanf("%d", &n);
	for(i = 0; i < n; i++) 
         {
		scanf("%s%s", str1, str2);
		int borrow = 0; 
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int len;
		len = len1;
		for(j=len2-1; j>=0;j--) 
                  {
			str2[j + len1 - len2] = str2[j];
		}
		for(j=0;j<len1-len2;j++) 
                  {
			str2[j] = '0';
		}
		for(k = len - 1; k >= 0; k--) 
                  {
			int temp = (str1[k] - '0') - (str2[k] - '0') - borrow; 
			if(temp < 0) 
                           {
				borrow = 1;
				result[k] = temp + 10;
			} 
                           else 
                           {
				borrow = 0;
				result[k] = temp;
			}
		}
		int k;
		for(k=0; result[k] == 0; k++);
		for(k=0;k<len; k++) 
                  {
			printf("%d", result[k]);
		}
		printf("\n");
	}
	return 0;
}
