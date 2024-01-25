/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

std::vector<int> digitize(unsigned long n) 
{        
  std::vector<int> a;
    while(n>10){
      a.vector::push_back(n%10);
      n/=10;
    }
  a.vector::push_back(n);
  std::cout<<"[";
    for(int i=0; i<a.size(); i++){
      if(i==(a.size()-1)){
          std::cout<<a[i];
          }
        else{
      std::cout<<a[i]<<",";
        };
    }
  std::cout<<"]";
  return a;
}


/*

Convert number to reversed array of digits
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]

*/