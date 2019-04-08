//#include<stdlib.h>
//#include<math.h>
int main()
{
	char s[301];
	int i,len;
	int b=0;
	int A[26]={0},a[26]={0};
	gets(s);
	len = strlen(s);
	for(i=0;i<len;i++) {
		if(s[i]>='A' && s[i]<='Z') {
			A[s[i]-'A']++;
			b=1;
		}
		else if(s[i]>='a' && s[i]<='z') {
			a[s[i]-'a']++;
			b=1;
		}
	}
	if(b == 0)
		printf("No\n");
	else {
		for(i=0;i<26;i++) {
			if(A[i] != 0)
				printf("%c=%d\n", 'A'+i, A[i]);
		}
		for(i=0;i<26;i++) {
			if(a[i] != 0)
				printf("%c=%d\n", 'a'+i, a[i]);
		}
	}
	return 0;
}
