#include "singleton.h"
#include "subsingleton1.h"

int main(int argc, char *argv[])
{
  Singleton::GetInstance();
  SubSingleton1::GetInstance();
  return 0;
}
