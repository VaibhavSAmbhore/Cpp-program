
//accept number for user and print that number * on screen

 #include <iostream>
 using namespace std;
 
 void Display(int ino)
 {
   int iCnt=0;
   for (iCnt=1;iCnt<=ino; iCnt++)
   {
      cout<<"*\t";
	}
	
	}
 
 int main()
 {
   int iValue=0;
   cout<<"enter number ";
   cin >>iValue;
   Display(iValue);
  return 0;
}  