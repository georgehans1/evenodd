#include <iostream>
using namespace std;

int number(){
int digit;
cout<<"Enter a number: "<<endl;
cin>>digit;
return digit;
}

int main(){
 int theNumber = number();
 int total;
 int count=0;
 if(theNumber % 2 != 0){
    for( int i = 0;;i++){
	    if(count == 30){
	    return 0;
	    }
	    else if(i % theNumber != 0 ){
         cout<<i<<endl;
	 count++;
      }
    }
     

 }else{
   for(int i = 1; i < 21; i++){
      total = theNumber * i;
      cout<<i<< " * " << theNumber << " = " << total<<endl; 
   }
 
 }


}






