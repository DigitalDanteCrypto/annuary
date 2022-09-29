#include <iostream>
#include "Students.h"
#include <cctype>


void Students::loopDisplayMenu() {

    bool display = true;
    do {
        std::cout << "\n";
        std::cout << "Welcome to the Annuary" << std::endl;
        std::cout << "Please choose an option" << std::endl;
        std::cout << "1 : Add A Student" << std::endl;
        std::cout << "2 : Search A Student" << std::endl;
        std::cout << "3 :  Display Annuary" << std::endl;
        std::cout << "4 :  Exit program" << std::endl;

        int userChoice;
        std::cin >> userChoice;

        switch (userChoice) {
            case 1:
                clearConsole();
                gettingUserInput();
                break;
            case 2:
                clearConsole();
                searchStudent();
                break;
            case 3:
                clearConsole();
                displayAnnuary();
                break;
            case 4:
                std::cout << "Closing program...";
                display = false;
                break;
            default:
                std::cout << "Error" << std::endl;
        }


    } while (display);
}

void Students::addStudentToList(std::string fullname, std::string number) {

    studentsList.insert({fullname, number});

}

Students::Students() {

}

void Students::gettingUserInput() {

    std::string userInputName;
    std::string userInputSurname;
    std::string userInputFullName;
    std::string userInputPhoneNumber;

    std::cout << "Hello, Please enter your information" << std::endl;
    std::cout << " enter your name" << std::endl;
    std::cin >> userInputName;
    std::cout << " enter your surname" << std::endl;
    std::cin >> userInputSurname;
    userInputFullName = userInputName + " " + userInputSurname;
    std::cout << " enter your phone number" << std::endl;
    std::cin >> userInputPhoneNumber;

    auto it = studentsList.find(userInputFullName);

    if (it != studentsList.end()) {
        std::cout << "USER ALREADY EXIST" << std::endl;

    } else {
        addStudentToList(userInputFullName, userInputPhoneNumber);
        std::cout << "USER ADDED" << std::endl;
    }
}

void Students::searchStudent() {

    ///Find user in list /////
    std::string userSearchName;
    std::string userSearchSurname;
    std::string userSearchFullInfo;

    std::cout << "Find user by name, please enter name" << std::endl;

    std::cin >> userSearchName;

    std::cout << "Find user by name, please enter surname" << std::endl;

    std::cin >> userSearchSurname;

    userSearchFullInfo = userSearchName + " " + userSearchSurname;

    std::cout << "Searching user... : " << userSearchFullInfo << std::endl;

    auto it = studentsList.find(userSearchFullInfo);

    if (it != studentsList.end()) {
        std::cout << "USER FOUND !! Student Phone : " << it->first <<
                  " - " << it->second << std::endl;

    } else {
        std::cout << "USER NOT FOUND !!!" << std::endl;
    }
    clearConsole();
}

void Students::displayAnnuary() {

    std::cout << "\n";

    for (auto &t: studentsList) {
        std::cout << t.first << " : ";
        std::cout << t.second << " " << std::endl;
    }
}

void Students::clearConsole() {

    std::cout << "==================";
    std::cout << "\n";
    std::cout << "==================";
    std::cout << "\n";


}

void Students::initiallingDataset() {
    addStudentToList("Joseph Gorden", "2343243432");
    addStudentToList("London Price", "223524366");
    addStudentToList("Samuel Olden", "22343432166");
    addStudentToList("Urga Peace", "123456789");
    std::cout << "\n";

}
