// role_specifier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
 
    
        std::cout << "'Well met, awnser sencierly now.'\n\n";



        int knight, druid, mage, rouge;
        int awnser1, awnser2, awnser3, awnser4, awnser5, awnser6;

        knight = 0;
        druid = 0;
        mage = 0;
        rouge = 0;



        std::cout << " 'how would you want people to remember you as'\n\n ";

        std::cout << "1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n\n";

        std::cin >> awnser1;

        if (awnser1 == 1) {
            druid++;
        }
        else if (awnser1 == 2) {
            rouge++;
        }
        else if (awnser1 == 3) {
            mage++;
        }
        else if (awnser1 == 4) {
            knight++;
        }
        else {
            std::cout << "Invalid input.\n";
        }


        std::cout << "'Dawn or Dusk?'\n\n";
        std::cout << "1) Dawn\n2) Dusk\n\n";

        std::cin >> awnser2;

        if (awnser2 == 1) {
            druid++&& knight++;
        }
        else if (awnser2 == 2) {
            mage++&& rouge++;
        }
        else {
            std::cout << "invalid input\n";
        }

        std::cout << "'Which kind of instrument most pleases your ear?'\n\n";

        std::cout << "1) The violin\n2) The trumpet\n3) The flute\n4) The drum\n\n";


        std::cin >> awnser3;
        if (awnser3 == 1) {
            mage++;
        }
        else if (awnser3 == 2) {
            knight++;
        }
        else if (awnser3 == 3) {
            rouge++;
        }
        else if (awnser3 == 4) {
            druid++;
        }
        else {
            std::cout << "Invalid input\n";
        }

        std::cout << "'which road tempts you most?'\n\n";
        std::cout << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";

        std::cin >> awnser4;
        if (awnser4 == 1) {
            knight++;
        }
        else if (awnser4 == 2) {
            rouge++;
        }
        else if (awnser4 == 3) {
            druid++;
        }
        else if (awnser4 == 4) {
            mage++;
        }
        else {
            std::cout << "Invalid input\n\n";
        }

        std::cout << "Somone close to you has invited you to a event, although its not really your kind of thing and have other plans.What is your response.\n\n";

        std::cout << "1) drop everything and come, make the most of it.\n2) decline and compromise for another time.\n3) explain that you can't make it because you have other plans.\n4) say that you cant come and that its not your thing\n\n";

        std::cin >> awnser6;
        if (awnser6 == 1) {
            druid++;
        }
        else if (awnser6 == 2) {
            knight++;
        }
        else if (awnser6 == 3) {
            mage++;
        }
        else if (awnser6 == 4) {
            rouge++;
        }
        else {
            std::cout << "invalid input";
        }


        std::cout << "Do you favor a  physical challange or a mental challenge.\n\n";
        std::cout << "1) Physical challenge\n2) Mixed but lean towards physical\n3) Mixed but lean towards mental\n4) Mental challenge \n\n";

        std::cin >> awnser5;

        if (awnser5 == 1) {
            knight++;
        }
        else if (awnser5 == 2) {
            rouge++;
        }
        else if (awnser5 == 3) {
            druid++;
        }
        else if (awnser5 == 4) {
            mage++;
        }
        else {
            std::cout << "invalid input";
        }


        //:)


        int max;
        max = 0;
        //the starting role and wepon you are given
        std::string role;
        std::string wepon;

        //holds the wepons uniquw stats 
        int wepon_id;

        if (knight > max) {

            max = knight;
            role = "Knight";
            wepon = "Sword";
            wepon_id = 1;
        }
        if (druid > max) {

            max = druid;
            role = "Druid";
            wepon = "Staff";
            wepon_id = 2;
        }
        if (mage > max) {

            max = mage;
            role = "Mage";
            wepon = "Tome";
            wepon_id = 3;
        }
        if (rouge > max) {

            max = rouge;
            role = "Rouge";
            wepon = "Dagger";
            wepon_id = 4;
        }


        std::cout << "'Hmmm I see, it seems to me that you would fall into the path of the " << role << "'.\n\n";




}

