#include <iostream>
#include <exception>

using namespace std;

class LinkedListOutOfBoundsException: public exception
{

  virtual const char* what() const throw(){
    return "LinkedListOutOfBoundsExceptionException thrown";
  }

};
