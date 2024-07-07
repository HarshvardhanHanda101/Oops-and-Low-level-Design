#include<iostream>
#include "FetchUser.h"

using namespace std;

string FetchUser:: fetchemail(UserRepository &repo , string &name){
    if(repo.EmailDatabase.find(name) != repo.EmailDatabase.end()){
        return repo.EmailDatabase[name];
    }
    else{
        return "Email not found";
    }
}

int FetchUser:: fetchID(UserRepository &repo , string &name){
    if(repo.UserIdDatabase.find(name) != repo.UserIdDatabase.end()){
        return repo.UserIdDatabase[name];
    }
    else{
        return -1;
    }
}

string FetchUser:: fetchDOB(UserRepository &repo , string &name){
    if(repo.DOBDatabase.find(name) != repo.DOBDatabase.end()){
        return repo.DOBDatabase[name];
    }
    else{
        return "DOB not found.";
    }
}









