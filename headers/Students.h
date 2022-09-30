#pragma once
#include <string>
#include <map>

class Students {

public:

    Students();

    std::map<std::string, std::string> studentsList;

    //Initialling Dataset
    void initiallingDataset();

    //display menus;
    void loopDisplayMenu();


//1.
    void gettingUserInput();

    //Method to add student in the list;
    void addStudentToList(std::string, std::string);

//2.
    void searchStudent();

//3.
    void displayAnnuary();

    //Clearing Console;
    void clearConsole();
};
