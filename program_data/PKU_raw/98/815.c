/*
 * ????.cpp
 *
 *  Created on: 2011-12-10
 *      Author: llx
 */

int main()
{
	int i,num,length,sumlen=0;//i?????num??????length??????sumlen???????? 
	char word[41];//???? 
	cin>>num;
	for(i=0;i<num;i++)
		{
		cin>>word;
		length=strlen(word);
		if (sumlen!=0)
		{
                      sumlen=sumlen+length;//???????? 
                      if (sumlen<79)//????????80?? 
                      {
                                                             cout<<" "<<word;//??????? 
                                                             sumlen++;//????? 
                                                             continue;//????????? 
                      }
                      if ((sumlen==80)||(sumlen==79))//?????80 
                      {
                                                                    cout<<" "<<word<<endl;//?????? 
                                                                    sumlen=0;//?? 
                      }
                      if (sumlen>80)//????80 
                      {
                                                 cout<<endl<<word;//????? 
                                                 sumlen=length+1;;
                      }
		}
		else
		{
            cout<<word;
            sumlen=length+1;}
        }
		cin.get();cin.get();cin.get();cin.get();
	return 0;
}
