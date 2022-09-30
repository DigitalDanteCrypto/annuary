#pragma once
#include <string>
#include <map>

class Students {

public:

    Students();

    //Creation of map to get the students by key and values
    std::map<std::string, std::string> studentsList;

    //Initialling Dataset
    void initiallingDataset();

    //display menus;
    void loopDisplayMenu();


//1. Getting the user input to add a student in map
    void gettingUserInput();

    //Method to add student in the list;
    void addStudentToList(std::string, std::string);

//2. Search Student function
    void searchStudent();

//3. and Display Annuary function
    void displayAnnuary();

    //Clearing Console;
    void clearConsole();
};
