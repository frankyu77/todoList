#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> list;

class DeleteElementFromList {
    public: 
        void deletePls() {
            vector<string> list1;

            for (int i = 0; i < (list.size() - 1); i++) {
                list1.push_back(list[i]);
            }
            list.clear();
            list = list1;
        }
};

class PrintList {
    public:
        void message() {
            cout << "__________________________________________" << "\n" << "LIST:" << "\n";
                for (int i = 0; i < list.size(); i++) {
                    cout << "- " << list[i] << "\n";
                }
        }
};


class MainPart {
    public:
        void start() {
            string userInput;
            PrintList printList;
            DeleteElementFromList del;

            while(true) {
                while(true) {
                    cout << "__________________________________________" << "\n";
                    cout << "What would you like to add to the list?" << "\n";
                    cout << "r - remove" << "\n";
                    cout << "q - quit" << "\n";
                    cin >> userInput;

                    if (userInput == "q") {
                        break;
                    } else if (userInput == "r") {
                        del.deletePls();
                    } else {
                        list.push_back(userInput);
                    }

                    printList.message();
                }

                printList.message();

                cout << "__________________________________________" << "\n";
                cout << "Do you want to continue?" << "\n";
                cin >> userInput;

                if (userInput == "no") {
                    printList.message();
                    cout << "__________________________________________" << "\n";
                    break;
                }
            }
        }

};

int main() {
    MainPart mainPart;
    string user;

    cout << "b - begin" << "\n" << "q - quit" << "\n";
    cin >> user;

    if (user == "b") {
        mainPart.start();
    } else {
        cout << "kys";
    }

    return 0;
}