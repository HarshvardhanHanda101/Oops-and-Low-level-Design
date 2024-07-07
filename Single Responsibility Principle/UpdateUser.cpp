#include<iostream>
#include "UpdateUser.h"
#include "UserRepository.h"

using namespace std;

UpdateUser::UpdateUser(string name , string email , string DOB , int id) : name(name) , email(email) , DOB(DOB) , id(id){}

void UpdateUser :: addDetails(UserRepository &repo){    // hum object create karenge repository ka and uske database me we will add it
    repo.EmailDatabase[this->name] = this->email;
    repo.DOBDatabase[this->name] = this->DOB;
    repo.UserIdDatabase[this->name] = this->id;
}


