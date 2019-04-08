int main()
{
   char str[300];
   char letter[300]="abcdefghijklmnopqrstuvwxyz";
   int num[300];
   int total=0;
   int i,j;
   for(i=0;i<26;i++){
	   num[i]=0;
   }
   int len;
   scanf("%s",str);
   len=strlen(str);
   for(i=0;i<len;i++){
       for(j=0;j<26;j++){
	       if(str[i]==letter[j])
               num[j]++;
	   }
   }
   for(i=0;i<26;i++){
	   if(num[i]>0)
	   printf("%c=%d\n",letter[i],num[i]);
   }
   for(i=0;i<26;i++){
	   total+=num[i];
   }
   if(total==0)
	   printf("No\n");
   return 0;
}