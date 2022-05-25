#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age = 0;
        string firstName = "";
        string lastName = "";
        int standard = 0;

    public:
        //Getter and setter for age
        void set_age (int inputAge) {
            age = inputAge;
        }
        int get_age () {
            return age;
        }
        //Getter and setter for first name
        void set_first_name (string inputFName){
            firstName = inputFName;
        };
        string get_first_name () {
            return firstName;
        }
        //Getter and setter for last name
        void set_last_name (string inputLName) {
            lastName = inputLName;
        }
        string get_last_name () {
            return lastName;
        }
        //Getter and setter for standard
        void set_standard (int inputStandard) {
            standard = inputStandard;
        }
        int get_standard () {
            return standard;
        }
        //create to_string to print age,first name, last name, and standard
        string to_string () {
            string finalString = "";
            return finalString;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}