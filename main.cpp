/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 
 3) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 4) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 5) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 6) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */


struct FloatType{
  float add( float lhs, float rhs ){
   return lhs + rhs; 
  }
  float subtract( float lhs, float rhs ){
    return lhs -rhs;
  }
  float multiply( float lhs, float rhs ){
    return lhs * rhs;
  }
  float divide( float lhs, float rhs ){
    return lhs/rhs;
  }
};

struct DoubleType{
 double add( double lhs, double rhs ){
   return lhs + rhs; 
  }
  double subtract( double lhs, double rhs ){
    return lhs -rhs;
  }
  double multiply( double lhs, double rhs ){
    return lhs * rhs;
  }
  double divide( double lhs, double rhs ){
    return lhs/rhs;
  }

};

struct IntType{

   int add( int lhs, int rhs ){
   return lhs + rhs; 
  }
  int subtract( int lhs, int rhs ){
    return lhs -rhs;
  }
  int multiply( int lhs, int rhs ){
    return lhs * rhs;
  }
  int divide( int lhs, int rhs ){
    return lhs/rhs;
  }
};



#include <iostream>
#include <iomanip>
int main()
{
  FloatType ft;
  DoubleType dt;
  IntType it;
  auto ftAddResult = ft.add(4.42f, 9.345f);
  auto ftSubResult = ft.subtract(500.345f, 300.345f);
  auto ftDivResult = ft.divide(23434.94f, 3.242f);
  auto ftMulResult = ft.multiply(1.4564f, 6.35235f);

  auto dtAddResult = dt.add(3.45, 5.36);
  auto dtSubResult = dt.subtract(9.645,3.64534);
  auto dtDivResult = dt.divide(200.35, 2.46);
  auto dtMulResult = dt.multiply(4.452, 5.245);

  auto itAddResult = it.add(35, 477);
  auto itSubResult = it.subtract(450, 46);
  auto itDivResult = it.divide(40,8);
  auto itMulResult = it.multiply(5, 60);

   std::cout  << "result of ft.add(): " << ftAddResult << std::endl;
   std::cout  << "result of ft.subtract(): " << ftSubResult << std::endl;
   std::cout  << "result of ft.divide(): " << ftDivResult << std::endl;
   std::cout  << "result of ft.multiply(): " << ftMulResult << std::endl;

   std::cout  << "result of dt.add(): " << dtAddResult << std::endl;
   std::cout  << "result of dt.subtract(): " << dtSubResult << std::endl;
   std::cout  << "result of dt.divide(): " << dtDivResult << std::endl;
   std::cout  << "result of dt.multiply(): " << dtMulResult << std::endl;

   std::cout  << "result of it.add(): " << itAddResult << std::endl;
   std::cout  << "result of it.subtract(): " << itSubResult << std::endl;
   std::cout  << "result of it.divide(): " << itDivResult << std::endl;
   std::cout  << "result of it.multiply(): " << itMulResult << std::endl;


    std::cout << "good to go!" << std::endl;
}
