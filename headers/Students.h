#pragma once

#include <string>
#include <map>

class Students {

public:

    Students();

    std::map<std::string, std::string> studentsList;

    //Initialling Dataset
    void initiallingDataset();

    //Method to add student in the list;
    void addStudentToList(std::string, std::string);

    //display menus;

    void loopDisplayMenu();

//1.
    void gettingUserInput();

//2.
    void searchStudent();

//3.
    void displayAnnuary();

    //Clearing Console;
    void clearConsole();
};
