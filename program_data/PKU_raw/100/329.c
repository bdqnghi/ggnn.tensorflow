int main() 
{ char str[300],word[300],p;
  int i,k=0,len,num[300]={0},j,t,check=0;
   scanf("%s",str);

   len=strlen(str);
   
   for(i=0;i<len;i++)
	   if(str[i]>='a'&&str[i]<='z')
		{   word[k]=str[i];check=1;
		for(j=i+1;j<len;j++)
		if(str[i]==str[j]) {str[j]=0;num[k]=num[k]+1;}
		k++;
		}
	
   for(i=0;i<k-1;i++)
	   for(j=i+1;j<k;j++)
		if(word[i]>word[j]) 
			{p=word[i];word[i]=word[j];word[j]=p;
		  t=num[i];num[i]=num[j];num[j]=t;
			}			
   for(i=0;i<k;i++)
	   printf("%c=%d\n",word[i],(num[i]+1));
   if(check==0) printf("No");
   return 0;
		
}