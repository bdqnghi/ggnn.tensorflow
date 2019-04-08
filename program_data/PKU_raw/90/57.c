PutMethod(int apple,int plate)
{int k,k1=0,k2=0;
 if(plate==1)k=1;
 else 
	{if(apple<plate)k2=0;
	 if(apple==plate)k2=1; 
	 if(apple>plate)
		k2=PutMethod(apple-plate,plate);
		k1=PutMethod(apple,plate-1);
	 k=k2+k1;
	}
 
 return k;
}
main()
{int t, apple, plate,i,k;
 scanf("%d",&t);
 for(i=0;i<t;i++)
	{scanf("%d %d",&apple,&plate);
	 k=PutMethod(apple,plate);
	 printf("%d\n",k);
	}
}