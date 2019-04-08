	void main()
	{
	    int index,i;
		char str[11],substr[4],w[14],max;
		while(scanf("%s %s",str,substr)!=EOF)
		{		
			max=str[0];	index=0;
			for(i=0;i<=strlen(str);i++)
			{   
				if(str[i]>max)
				{index=i;
				max=str[i];
				}
			}
	        	w[0]='\0';	
	     	    strncat(w,str,index+1);
				strcat(w,substr);
				strcat(w,str+index+1);
				printf("%s\n",w);
			}
	}