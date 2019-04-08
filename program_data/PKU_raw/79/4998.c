int main()
{
	int m,n,k,i,j,count=0;
	for(k=0;;k++)
	{
		scanf("%d%d",&n,&m);
		if(m!=0&&n!=0)
		{
			int *num=(int*)malloc(sizeof(int)*n);//????
			for(i=0;i<n;i++)
				*(num+i)=i+1;

			i=0;
			for(j=0;j<n-1;j++)                    //??n-1?
			{
				for(;;){
					if(*(num+i)==0)
						i=(i+1)%n;              //??0????
					else{
				        count++;
				        if(count==m)
						{
							*(num+i)=0;
							count=0;
							i=(i+1)%n;
						    break;
						}
					    else i=(i+1)%n;
					}                          //count??????????m???
				}
			}
		   for(i=0;i<n;i++)
		   {
			   if(*(num+i)!=0){
				   printf("%d\n",num[i]);         //????0???
				   break;
			   }
		   }
		   free(num);
		}
		else
			break;
	}
	
	return 0;
}
