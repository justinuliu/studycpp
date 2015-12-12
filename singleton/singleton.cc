#include <iostream>
#include "singleton.h"
#include "subsingleton1.h"

Singleton *Singleton::instance_ = 0;

Singleton* Singleton::GetInstance()
{
  std::cout<<"I am Singleton"<< std::endl;
  if (instance_ == 0) {
    instance_ = new SubSingleton1();
  }
  return instance_;
}
