#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age = 0;
        string firstName = "";
        string lastName = "";
        string standard = "";

    public:
        //Getter and setter for age
        void setAge (int inputAge) {
            age = inputAge;
        }
        //Getter and setter for first name

        //Getter and setter for last name

        //create to_string to print age,first name, last name, and standard
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