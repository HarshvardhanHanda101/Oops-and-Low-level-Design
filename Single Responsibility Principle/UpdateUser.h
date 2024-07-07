#if !defined(UPDATEUSER_H)
#define UPDATEUSER_H
#include<iostream>
#include "UserRepository.h"



// jitni baaki details hongi user ki apart from email and name vo yaha se apan update karenge
using namespace std;

class UpdateUser{

 private:
 string name;
 string email;
 string DOB;
 int id;

public:
UpdateUser(string name , string email , string DOB , int id);

void addDetails(UserRepository &repo);


};

#endif