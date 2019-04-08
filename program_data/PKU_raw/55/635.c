
/**
?originBase?number???10?? 
*/
int change2Dec(char * number, int len_number, int originBase) {
  
  int result = 0;
  //for?? 
  for (int i=0; i<len_number; i++) {
    //???????10????????
    int numberBit = 0;
    if (number[i]>='0' && number[i]<='9') {
      numberBit = number[i]-'0';
    }
    else if (number[i]>='a' && number[i]<='z') {
      numberBit = number[i]-'a'+10;
    }
    else {
      numberBit = number[i]-'A'+10;
    }
    
    //???????????
    int position = len_number-i;
    
    //???????????? 
    int currentBitValue = numberBit;
    for (int i=1; i<position; i++) {
      currentBitValue *= originBase;
    }
    result += currentBitValue;
  }
  return result;       
} 

/**
?10??decNumber???newBase??????newNumber???????????? 
*/
int changeDec2NewBase(int decNumber, int newBase, char* newNumber) {
    int bitValue[100];                   //??????????????????? 
    int length=0;                          //??????? 
    while (decNumber/newBase > 0) {
        bitValue[length++] = decNumber%newBase;         //??
        decNumber /= newBase;
    }
    bitValue[length++] = decNumber;                     //??????
    
    for (int i=length-1,j=0; i>=0; i--,j++) {
        int currentBit = bitValue[i];
        if (currentBit < 10)
            newNumber[j]=currentBit+'0';
        else
            newNumber[j]=currentBit+'A'-10;
    }
    return length;
}

int main()
{
    int originBase;         //????
    int newBase;            //???
    char number[100];       //????????
    char newNumber[100];    //?????? 
    cin >> originBase >> number >> newBase;
    int len_number;             //????????
    int len_newNumber;          //????????
     
    for (int i=0; i<100; i++)
        if (number[i]==0) {
           len_number = i;
           break;
        }
    int decNumber = change2Dec(number, len_number, originBase);
    len_newNumber = changeDec2NewBase(decNumber, newBase, newNumber);
    newNumber[len_newNumber]=0;
    cout << newNumber << endl;
    
}


