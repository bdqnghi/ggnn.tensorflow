int main()
{
double n=0,age=0,a=0,b=0,c=0,d=0,i=0;//n????? a?b?c?d???18???19-35?36-60?61???????   age?????i??????? 
cin>>n;
       for(i=1;i<=n;i++)
       {
       cin>>age;
       if(age<=18)
       a+=1;
       if((age>=19)&&(age<=35))
       b+=1;
       if ((age>=36)&&(age<=60))   
       c+=1;
       if(age>=61)
       d+=1;             
       }
a=a/n*100;b=b/n*100;c=c/n*100;d=d/n*100;
printf("1-18: %.2f%\n",a);   
printf("19-35: %.2f%\n",b);  
printf("36-60: %.2f%\n",c);  
printf("60??: %.2f%\n",d);  
return 0;
}
