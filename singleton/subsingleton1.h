#ifndef SUBSINGLETON1_H
#define SUBSINGLETON1_H

#include "singleton.h"

class SubSingleton1: public Singleton
{
  friend Singleton* Singleton::GetInstance();
 public:
  virtual bool IsValid(){return true;}
 private:
  static Singleton *GetInstance();
  SubSingleton1(){};
  virtual ~SubSingleton1(){};
};


#endif /* SUBSINGLETON1_H */
