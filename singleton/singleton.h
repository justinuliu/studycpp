#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
 public:
  static Singleton *GetInstance();
  virtual bool IsValid() = 0;

 protected:
  Singleton(){};
  virtual ~Singleton(){};
 private:
  static Singleton *instance_;
};

#endif /* SINGLETON_H */
