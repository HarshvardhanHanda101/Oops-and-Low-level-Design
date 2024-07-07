#if !defined(USER_H)
#define USER_H
#include<iostream>
#include "UserRepository.h"
#include <string>


using namespace std;


class FetchUser{
 public : 
  string fetchemail(UserRepository &repo, string &name);
  string fetchDOB(UserRepository &repo, string &name);
  int fetchID(UserRepository &repo, string &name);
};

#endif
