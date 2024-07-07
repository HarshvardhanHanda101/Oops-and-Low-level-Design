#include<iostream>
#include "FetchUser.h"
#include "UpdateUser.h"

using namespace std;


using namespace std;

int main() {
    int numUsers;
    cout << "Enter number of users: ";
    cin >> numUsers;

    UserRepository repo;
    for (int i = 0; i < numUsers; ++i) {
        string name, email, DOB;
        int id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter DOB: ";
        cin >> DOB;
        cout << "Enter id: ";
        cin >> id;

        UpdateUser user(name, email, DOB, id);
        user.addDetails(repo);
    }

    cout << "Enter the name you want to search for: ";
    string tempname;
    cin >> tempname;

    cout << "Email: " << FetchUser::fetchemail(repo, tempname) << endl;
    cout << "DOB: " << FetchUser::fetchDOB(repo, tempname) << endl;
    cout << "ID: " << FetchUser::fetchID(repo, tempname) << endl;

return 0;
}