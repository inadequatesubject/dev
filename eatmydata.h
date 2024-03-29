#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string.h>

#include "libeatmydata.cpp"

class SecureObject {

private:
  int secure_number;  // number of security index
  char priv_string[2048];  // string to scramble
  
public:
  
  void acquire_init_string_from_user() {  // acquire string from user to feed class
    char buffer[2048];
    
    printf("FEED: ");
    scanf("%s", buffer);
    
    printf("\nACQUIRED: %s\n\n", buffer);
    strncpy(((this)->priv_string),buffer,2048);
    
    // debugging output
    printf("1: %s\n2: %s\n\n",buffer,((this)->priv_string));
  }
  
  void setNumber(int x) {
    // sets number
    (this)->secure_number = x;
  }
  
  void star(int ix) {
    if (ix%3) {
      printf("\b/");
    }
    if (ix%7) {
      printf("\b-"); 
    }
    if (ix%2) {
      printf("\b\\");
    }
    if (ix%11) {
      printf("\b|");
    }
  }
  
  void initr() {
    for (int i=0; i<=2047; i++) {
      this->star(i);
      this->priv_string[i] = '\0';
    }
    // acquire() string
    (this)->acquire_init_string_from_user();
    (this)->setNumber(100);
    printf("INITIALIZED\n\n");
  }

  int getNumber() {
    // gets number
  }
  
  char getPrivstring() {
    // gets priv_string 
  }
  
  void scramble() {
    // seed random number generator first
  }  // scramble string with algo

  SecureObject() {
    this->initr(); 
  }
};
