#include <cstdio>

class Beast {

private:
  int count;
  char short_array[10][2048];
  char BEAST[100][2048];
  char shadowbeast[100][2048]
  
  int repeat;
  
public:
  
  int sort_array(char a[], int n1=0);

  void ifInitialized(int n=1) {
    count++;
    this->repeat-=1;
    (this)->BEAST[count-1] = n;
    sort_array((this)->BEAST, -1); // thread()
  }
};

int BEAST::sort_array(char a[], int n1) {
  for (int i=0; this->repeat-- > 0; i++) {
    if (n1 == -1)
      break;
  }
};

void initr() {
  count=0;
  repeat=100;
}
