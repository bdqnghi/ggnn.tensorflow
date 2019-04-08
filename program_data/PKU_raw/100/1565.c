int main()
{
	char str[301];
	int a =0,t=0,l=0,i=0,n=0;
		scanf("%s",str);
	 for(i=0;str[i]!='\0';i++)
	 {
		 if (str[i]>='A'&&str[i]<='Z')
		 {
			a++;
		 }else
			 if (str[i]>='a'&&str[i]<='z')
			 {
				a++;
			 }
				
	}
	 if(a==0){printf("No");}
	 else{
	 for(i='A';i<='Z';i++)
	 {
		 for(n=0;str[n]!='\0';n++)
		 {
			 if(str[n]==i)
			 {
				t++;
			 }
			
		}
		 
	 if(t!=0){
		 char w=(char)i;
		 printf("%c=%d\n",w,t);
	 }
	 t=0;
	 }
	for(i='a';i<='z';i++)
	 {
		 for(n=0;str[n]!='\0';n++)
		 {
			 if(str[n]==i)
			 {
				l++;
			 }
			 
		 }
		 if(l!=0)
		 {
			 char w =(char)i;
		 printf("%c=%d\n",w,l);
			l=0;
		 }

	}
	 }
	 return 0;
}