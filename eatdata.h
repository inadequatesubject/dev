#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string.h>

class SecureObject {

private:
  int secure_number;  // number of security index
  char string[2048];  // string to scramble
  
public:
  void initr() {
    for (int i=0; i<=2047; i++) {
      // print rotating star
      this->string[i] = '\0';
    }
    printf("INITIALIZED\n\n");
  }

  void setNumber() {
  
  }
  
  int getNumber() {
  
  }
  
  void scramble() {
    
  }  // scramble with algo

};
